%{
int yylex();
int yyerror(char*);
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "SymbolTable.c"
#include "LinkedList.c"
#include "Record.c"
#include "PatchStruct.c"
extern int lineno;
record_global GlobalTrack = {0,1,3,NULL,0,0,NULL,0,0,0,0,0,0,0};
FILE *output;
%}

%token IS BEG END PROCEDURE ID NUMBER TYPE ARRAY RAISE OTHERS
%token RECORD IN OUT RANGE CONSTANT ASSIGN EXCEPTION NULLWORD LOOP IF
%token THEN ELSEIF ELSE CASE EXIT WHEN AND OR EQ NEQ LT GT GTE LTE TICK
%token NOT EXP ARROW OF DOTDOT ENDIF ENDREC ENDLOOP ENDCASE EXITWHEN
%type <integer> NUMBER constant_number declarative_part begin loop_start main_specification
%type <var> ID type_name mode IN OUT EXCEPTION adding_operation multiplying_operation relational_operation boolean_operation procedure_specification procedure_body_prime
%type <head> identifier_list
%type <headNum> case_choice_sequence
%type <node_p> parameters   formal_parameter_part
%type <record_p> primary factor term simple_expression relation expression op_assign condition enum_list
%type <RW> expression_list op_param
%union {
    int integer;
    char * var;
    struct LL_node * head;
    struct LLNum_node * headNum;
    struct node * node_p;
    struct record * record_p;
    struct LL_RW * RW;
}%%

program                 : main_body {printf ("\n*****\nDONE\n*****\n");}
                        ;
main_body               : main_specification IS
                          declarative_part begin
                          sequence_of_statements
                          exception_part END ';'
                        {
                          printf("\nPopping scope for %s, so print tree\n", arr[i].Key);
                          printDFS(arr[i].Root);
                          Pop();
                          PopToPatchStack();
                          fprintf(output, "%d     r%d := contents b, 1\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                          fprintf(output, "%d     b := contents b, 3\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     pc := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++);
                          fprintf(output, "\n***************\n");
                          fprintf(output, "DONE WITH MAIN\n");
                          fprintf(output, "***************\n");
                          AddPatchList(0, GlobalTrack.Instruction);
                          AddPatchList(1, GlobalTrack.Instruction + $3);
                          bubbleSort(PatchListLL);
                          printPL(PatchListLL);
                        }
                        ;
main_specification      : PROCEDURE ID
                        {
                          PushToPatchStack();
                          Push($2);
                          fprintf(output, "%d     b := ?\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     contents b, 0 := ?\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     contents b, 1 := 5\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     r%d := 0\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++);
                          struct patch_list * Temp;
                          Temp = create_new_patch_list(GlobalTrack.Instruction);
                          PatchListLL = Temp;
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     halt\n", GlobalTrack.Instruction++);
                          $$ = GlobalTrack.Instruction;
                          incrementOffset(4);
                          GlobalTrack.in_exception_part = false;GlobalTrack.raise_list = 0;
                          GlobalTrack.instruction_counter = 0;
                        }
                        ;
procedure_body          : procedure_body_prime formal_parameter_part IS
                          declarative_part begin
                          sequence_of_statements
                          exception_part END ';'
              	        {
                          node_t * outcome = Search($1);
                          outcome -> Proc_Beg = $5;
                          printf("\nPopping scope for %s, so print tree\n", arr[i].Key);
                          printDFS(arr[i].Root);
                          Pop();
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          outcome -> next = $2;
                          node_t * current = $2;
                          while (current != NULL) {
                            if (strcmp(current->mode, "out") == 0 || strcmp(current->mode, "in out")==0) {
                              fprintf(output, "%d     r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, current->value+1);
                              fprintf(output, "%d     contents r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, current->value);
                            }
                            current = current -> next;
                          }
                          fprintf(output, "%d     r%d := contents b, 1\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                          fprintf(output, "%d     b := contents b, 3\n", GlobalTrack.Instruction++);
                          fprintf(output, "%d     pc := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++);
                          outcome->Size_of = currentOffset();
                          GlobalTrack.in_exception_part = false;
                          GlobalTrack.raise_list = 0;
                          prevOffset();
                          procedure_counter = 0;
                        }
                        ;
begin			              : BEG
  			                {
                          PatchListLL -> insert = GlobalTrack.Instruction;
                          $$ = GlobalTrack.Instruction;
  			                }
  			                ;
procedure_body_prime	  : procedure_specification
                        {
                          PushToPatchStack();
                          GlobalTrack.in_exception_part = false;
                          GlobalTrack.raise_list = 0;
                          GlobalTrack.instruction_counter = 0;
                          $$ = $1;
                        }
                  	    ;
procedure_specification : PROCEDURE ID
	          	          {
                          struct node * node_p;
                          node_p = create_new_node($2);
                          strcpy(node_p->var, $2);
                          Add(node_p->var);
                          node_t * outcome = RecursiveSearch(arr[i].Root, node_p->var);
                          strcpy(outcome->kind, "procedure");
                          $$ = $2;
                          Push(node_p->var);
                          nextOffset();//Go to the Next Offset
                          incrementOffset(4);
                          outcome->Size_of = current_pos;
                          procedure_counter = 0;
	          	          }
                        ;
formal_parameter_part   : '(' parameters ')'
                  		  {
                          struct node * node_p = $2;
                          while (node_p != NULL) {
                            node_p = node_p -> next;
                          }
                          $$ = $2;
                        }
                        | %empty
                  		  {
                          $$ = NULL;
                        }
                        ;
parameters              : parameters ';' identifier_list ':' mode type_name
		          	        {
                          LL_node current = $3;
                          print(current);
                          node_t * outcome = RecursiveSearch(arr[i].Root, $1->var); //Parameter search.
                          node_t * previous = outcome;
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome1 = RecursiveSearch(arr[i].Root, current->data); //ID LL search.
                            strcpy(outcome1->mode, $5);
                            outcome1->value = 4 + procedure_counter;
                            outcome1->parent_type = Search($6);
                            strcpy(outcome1->kind, "variable");
                            node_t * temp = outcome;
                            while (temp -> next != NULL) {
                              temp = temp -> next;
                            }
                            temp -> next = outcome1;
                            current = current->next;
                            printf(" %s\n", outcome1->mode);
                            outcome1->offset = currentOffset();
                            incrementOffset(outcome1->parent_type->offset);
                            procedure_counter = procedure_counter + outcome1 -> parent_type -> offset;
                            if (strcmp($5, "out") == 0 || strcmp($5, "in out")==0) {
                              procedure_counter++;
                              incrementOffset(outcome1->parent_type->offset);
                            }
                            $$ = outcome;
                          };
                        }
                        | identifier_list ':' mode type_name
                        {
                          LL_node current = $1;
                          print(current);
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
                            strcpy(outcome->mode, $3);
                            outcome->value = 4 + procedure_counter;
                            outcome->parent_type = Search($4);
                            strcpy(outcome->kind, "variable");
                            current = current->next;
                            printf(" %s\n", outcome->mode);
                            procedure_counter = procedure_counter + outcome -> parent_type -> offset;
                            outcome->offset = currentOffset();
                            incrementOffset(outcome->parent_type->offset);
                            if (strcmp($3, "out") == 0 || strcmp($3, "in out")==0) {
                              procedure_counter++;
                              incrementOffset(outcome->parent_type->offset);
                            }
                            $$ = outcome;
                          };
				                }
                        ;
mode                    : IN OUT
				                {
                          $$ = "in out";
                        }
                        | OUT
				                {
                          $$ = "out";
                        }
                        | IN
				                {
                          $$ = "in";
                        }
                        | %empty
				                {
                          $$ = "in";
                        }
                        ;
identifier_list         : ID ',' identifier_list
				                {
                          $3 = insertList($3, $1);
                          $$ = $3;
				                }
                        | ID
				                {
                          struct LL_node *head;
                          head = init($1);
                          $$ = head;
				                }
                        ;
type_name               : ID
				                {$$ = $1;}
                        ;
declarative_part        : objects ';' declarative_part
                        {
                          $$ = currentOffset();
                        }
                        | types ';' declarative_part
                        {
                          $$ = currentOffset();
                        }
                        | exceptions ';' declarative_part
                        {
                          $$ = currentOffset();
                        }
                        | declarative_part_prime
                        {
                          $$ = currentOffset();
                        }
                        ;
declarative_part_prime  : procedure_body declarative_part_prime
                        | %empty
                        ;
types                   : TYPE ID IS ARRAY  '(' constant_number DOTDOT constant_number ')' OF type_name
                        {
                          Add($2);
                          node_t * outcome = RecursiveSearch(arr[i].Root, $2);
                          node_t * temp = RecursiveSearch(arr[0].Root, $11);
                          outcome->lower = $6;
                          outcome->upper = $8;
                          outcome->offset = ($8 - $6 + 1) * temp -> offset;
                          outcome->component_type = Search($11);
                          strcpy(outcome->kind, "array");
                        }
                        ;
types                   : TYPE ID IS RECORD component_list ENDREC
                        ;
types                   : TYPE ID IS '(' identifier_list ')'
                        {
                          Add($2);
                          node_t* outcome = Search($2);
                          strcpy(outcome->kind, "enumeration");
                          outcome->offset = 1;
                          LL_node current = $5;
                          node_t * temp = Search($2);
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
                            strcpy(outcome->var, current -> data);
                            strcpy(outcome->kind, "enumeration");
                            outcome->parent_type = temp;
                            outcome->parent_type -> value = GlobalTrack.enum_counter;
                            outcome->value = GlobalTrack.enum_counter++;
                            current = current->next;
                          }
                          GlobalTrack.enum_counter  = 0;
                        }
                        ;
types                   : TYPE ID IS RANGE constant_number DOTDOT constant_number
                        {
                          if (RecursiveSearch(arr[i].Root, $2) != NULL) {
                            printf("     ERROR: Duplicate IDs!\n");
                          } else {
                              Add($2);
                              node_t* outcome = Search($2);
                              strcpy(outcome->kind, "range");
                              outcome->upper = $7;
                              outcome->lower = $5;
                            }
                          }
                        ;
component_list          : component ';' component_list
                        | component ';'
                        ;
component               : objects
                        ;
objects                 : identifier_list ':' type_name
		          	        {
		          	         printf("     line#: %d - ", lineno);
		                     LL_node current = $1;
		          	         print(current);
		          	         printf(" %s\n", $3);
		          	         node_t * temp = Search($3);
		                     while (current != NULL) {
		          		            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
		          			          printf("     ERROR: Duplicate IDs!\n");
		          			          current = current->next;
		          			          continue;
		          		       }
		                	   Add(current->data);
		                  	 node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
		          		       strcpy(outcome->kind, "variable");
		          		       outcome->parent_type = temp;
					               outcome->offset = currentOffset();
					               outcome->lower = temp->lower;
					               outcome->upper = temp->upper;
					               incrementOffset(outcome->parent_type->offset);
		          		       current = current->next;
		              	     }
		          	        }
                        | identifier_list ':' CONSTANT ASSIGN constant_expression
                        ;
constant_number		      : ID
				                {
                          $$ = 0;
                        }
			                  | NUMBER
				                {
                          $$ = $1;
                        }
			                  ;
constant_expression     : expression
                        ;
exceptions              : identifier_list ':' EXCEPTION
                        {
                          LL_node current;
                          current = $1;
                          while (current != NULL) {
                            if (RecursiveSearch(arr[i].Root, current->data) != NULL) {
                              printf("     ERROR: Duplicate IDs!\n");
                              current = current->next;
                              continue;
                            }
                            Add(current->data);
                            node_t * outcome = RecursiveSearch(arr[i].Root, current->data);
                            strcpy(outcome->kind, "exception");
                            outcome -> ival = GlobalTrack.next_exception++;
                            current = current -> next;
                          }
                        }
                        ;
sequence_of_statements  : statement sequence_of_statements
                        | %empty
                        ;
statement               : NULLWORD ';'
			                  | ID op_param op_assign ';'
			                  {
                          node_t * outcome = Search($1); //Search for $1 in Global Tree
                          int x = SearchPosition($1); //Check if it is local
                          if ($3 -> Value == 0 && strcmp(outcome->kind, "procedure") == 0) {
                            fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            int base_reg = GlobalTrack.register_Num;
                            fprintf(output, "%d     b := contents r%d, 0\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            fprintf(output, "%d     contents b, 3 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            if (x == 0) {
                              fprintf(output, "%d     contents b, 2 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            } else {
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              fprintf(output, "%d     contents b, 2 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            }
                            GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome->Size_of);
                            fprintf(output, "%d     contents b, 0 := b + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            GlobalTrack.register_Num++;
                            node_t * current = outcome -> next;
                            struct LL_RW * currentRW = $2;
                            while (current != NULL) {
                              if (strcmp(current->mode, "in") == 0) {
                                fprintf(output, "%d     contents b, %d := r%d\n", GlobalTrack.Instruction++, current->value, currentRW -> record_List -> Reg_Num);
                              }

                              if (strcmp(current->mode, "in out") == 0) {
                                if (currentRW -> record_List -> Global == true) {
                                  fprintf(output, "%d     contents b, %d := contents r%d, %d\n", GlobalTrack.Instruction++, $2->record_List -> Offset, currentRW -> record_List -> Reg_Num, $2->record_List -> Offset);
                                } else {
                                  fprintf(output, "%d     contents b, %d := contents r%d, %d\n", GlobalTrack.Instruction++, $2->record_List -> Offset, base_reg, $2->record_List -> Offset);
                                }
                                fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $2 ->record_List->Offset);
                                if (currentRW -> record_List -> Global == true) {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, currentRW -> record_List -> Reg_Num, GlobalTrack.register_Num-1);
                                } else {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, base_reg, GlobalTrack.register_Num-1);
                                }
                                fprintf(output, "%d     contents b, %d := r%d\n", GlobalTrack.Instruction++, current->value+1, GlobalTrack.register_Num);
                                GlobalTrack.register_Num++;
                              }

                              if (strcmp(current->mode, "out") == 0) {
                                fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $2 ->record_List->Offset);
                                if (currentRW -> record_List -> Global == true) {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, currentRW -> record_List -> Reg_Num, GlobalTrack.register_Num-1);
                                } else {
                                  fprintf(output, "%d     r%d := r%d + r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, base_reg, GlobalTrack.register_Num-1);
                                }
                                fprintf(output, "%d     contents b, %d := r%d\n", GlobalTrack.Instruction++, current->value+1, GlobalTrack.register_Num);
                                GlobalTrack.register_Num++;
                              }
                              current = current -> next;
                              currentRW = currentRW -> next;
                            }
                            GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction, GlobalTrack.register_Num, GlobalTrack.Instruction + 3);
                            GlobalTrack.Instruction++;
                            fprintf(output, "%d     contents b, 1 := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            GlobalTrack.register_Num++;
                            fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, outcome->Proc_Beg);
                            GlobalTrack.raise_list = GlobalTrack.Instruction;
                            fprintf(output, "%d     pc := ? if r1\n", GlobalTrack.Instruction++);
                          } else if ($3 -> Value == 1 && $2 == NULL) { // If you have ID ASSIGN expression
                            struct record * record_p = create_new_record();
                            if (x == 0) { //Local Variable
                              if ($3->Global) { //Check right hand side Global
                                fprintf(output, "%d     contents b, %d := contents r%d, %d \n", GlobalTrack.Instruction++, outcome -> offset, $3->Reg_Num, $3 -> Offset);
                                outcome -> Reg_Num = $3 -> Reg_Num;
                              } else if ($3->isRegister) { //Check right hand side Register
                                fprintf(output, "%d     contents b, %d := r%d \n", GlobalTrack.Instruction++, outcome -> offset, $3->Reg_Num);
                                outcome -> Reg_Num = $3 -> Reg_Num;
                              } else {
                                fprintf(output, "%d     contents b, %d := contents b, %d\n", GlobalTrack.Instruction++, outcome->offset, $3->Offset);
                              }
                            } else { //Global Variable
                              fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              if ($3->Global) {
                                fprintf(output, "%d     contents r%d, %d := contents r%d, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome -> offset, $3->Reg_Num, $3->Offset);
                                outcome -> Reg_Num = $3 -> Reg_Num;
                              } else if ($3->isRegister) {
                                fprintf(output, "%d     contents r%d, %d := r%d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome -> offset, $3->Reg_Num);
                                outcome -> Reg_Num = $3 -> Reg_Num;
                              } else {
                                fprintf(output, "%d     contents r%d, %d := contents b, %d \n",
                                GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome -> offset, $3->Offset);
                              }
                              GlobalTrack.register_Num++;
                            }
                          } else if ($2 -> record_List -> Value = 1 && $3 -> Value == 0) { //If you have read or write
                            if ($2 -> next == NULL) {
                              if (strcmp(outcome->kind, "read_routine") == 0) {
                                node_t * temp = Search($2->record_List->Identifier); //Search for $1 in Global Tree
                                strcpy($2->record_List->Parent_type, temp->parent_type->var);
                                if ($2->record_List->Global) {
                                  fprintf(output, "%d     read_%s contents r%d, %d\n", GlobalTrack.Instruction++, $2->record_List->Parent_type, $2->record_List->Reg_Num, $2->record_List->Offset);
                                } else {
                                  fprintf(output, "%d     read_%s contents b, %d\n", GlobalTrack.Instruction++, $2->record_List->Parent_type, $2->record_List->Offset);
                                }
                              }
                            } else {
                              while ($2 != NULL) {
                                if ($2->record_List->Global) {
                                  fprintf(output, "%d     write contents r%d, %d\n", GlobalTrack.Instruction++, $2->record_List->Reg_Num, $2 ->record_List -> Offset);
                                } else  if ($2->record_List->isRegister) {
                                  fprintf(output, "%d     write r%d\n", GlobalTrack.Instruction++, $2->record_List->Reg_Num);
                                } else {
                                  fprintf(output, "%d     write contents b, %d\n", GlobalTrack.Instruction++, $2->record_List->Offset);
                                }
                                $2 = $2 -> next;
                              }
                            }
                          } else { //Else it is an array on the left hand side of assign
                            int temp = outcome -> offset - outcome -> lower;
                            if (x == 0) { //Local Variable
                              if ($3 -> Global) {
                                fprintf(output, "%d     contents b, %d := contents r%d, r%d, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, $3 -> Reg_Num, $3 -> Reg_Num, temp);
                              } else if ($3->Reg_Num) {
                                fprintf(output, "%d     contents b, r%d, %d := r%d\n", GlobalTrack.Instruction++, $2->record_List -> Reg_Num, temp, $3->Reg_Num);
                              } else {
                                fprintf(output, "%d     contents b, r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, $3->Value);
                              }
                            } else { //Global Variable
                              fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              if ($3->Global) {
                                fprintf(output, "%d     contents b, r%d, %d := r%d\n", GlobalTrack.Instruction++, $2 -> record_List -> Reg_Num, temp /*+ $2 -> record_List -> check*/, $3->Reg_Num);
                              } else if ($3->Reg_Num) {
                                fprintf(output, "%d     contents r%d, %d := r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, temp + $2 -> record_List -> check, $3->Reg_Num);
                              } else {
                                fprintf(output, "%d     contents b, r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, $3->Value);
                              }
                            }
                          }
                        }
                        | loop_part
                        | if_statement
                        | RAISE ID ';'
                        {
                          node_t * outcome = Search($2);
                          if(strcmp(outcome->kind, "exception") == 0) {
                            if (GlobalTrack.in_exception_part == true) {
                              fprintf(output, "%d     r1 := %d\n", GlobalTrack.Instruction++, outcome->ival);
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                              GlobalTrack.raise_list = GlobalTrack.Instruction;
                              AddPatch(GlobalTrack.raise_list);
                              GlobalTrack.Instruction++;
                            } else {
                              fprintf(output, "%d     r1 := %d\n", GlobalTrack.Instruction++, outcome->ival);
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                              GlobalTrack.raise_list = GlobalTrack.Instruction;
                              GlobalTrack.Instruction++;
                            }
                          }
                        }
                        | RAISE ';'
                        {
                          if (GlobalTrack.in_exception_part == true) {
                            fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                            GlobalTrack.raise_list = GlobalTrack.Instruction;
                            AddPatch(GlobalTrack.raise_list);
                            GlobalTrack.Instruction++;
                          }
                        }
                        | CASE case_exp IS caseList ENDCASE ';'
                        {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          casecounter--;
                        }
                        ;
case_exp                : expression
                        {
                          PushToPatchStack();
                          casecounter++;
                          case_register[casecounter] = $1->Reg_Num;
                        }
caseList                : caseList caseHandler
                        | caseHandler
                        ;
caseHandler             : WHEN case_choice ARROW sequence_of_statements
                        {
                          struct patch_list * temper = ToPatch_Arr[ToPatchCounter];
                          while (temper != NULL) {
                            AddPatchList(temper->location, GlobalTrack.Instruction+1);
                            temper = temper->next;
                          }
                          if (case_or_counter != 0) {
                            for (int i = 0; i < case_or_counter; i++) {
                              AddPatchList(case_or[i], GlobalTrack.case_or_jump+1);
                            }
                          }
                          PopToPatchStack();
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                          GlobalTrack.case_or_not_jump = GlobalTrack.Instruction;
                          if (GlobalTrack.case_or_counter_checker != 0) {
                            for (int i = 1; i <= GlobalTrack.case_or_counter_checker; i++) {
                              if (i == GlobalTrack.case_or_counter_checker) {
                                AddPatchList(case_ornot[i], GlobalTrack.case_or_not_jump+1);
                              } else {
                                AddPatchList(case_ornot[i], case_ornot[i]+2);
                              }
                            }
                          }
                          AddPatch(GlobalTrack.Instruction);
                          GlobalTrack.Instruction++;
                          GlobalTrack.case_or = 0;
                          case_or_counter = 0;
                          GlobalTrack.case_or_counter_checker = 0;
                          GlobalTrack.case_or_not_jump = 0;
                        }
                        ;
case_choice             : case_choice_sequence
                        {
                          if (GlobalTrack.case_or == 1) {
                            int tempnum = 0;
                            struct patch_list * temper = ToPatch_Arr[ToPatchCounter];
                            while (temper != NULL) {
                              AddPatchList(temper->location, GlobalTrack.Instruction+1);
                              temper = temper->next;
                              tempnum = GlobalTrack.Instruction;
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                            }
                            PopToPatchStack();
                            PushToPatchStack();
                            case_or[case_or_counter] = tempnum;
                            case_or_counter++;
                            GlobalTrack.case_or_temp = tempnum;
                            struct LLNum_node * temp = $1;
                            while (temp -> next != NULL) {
                              GlobalTrack.case_or_counter_checker++;
                              fprintf(output, "%d     r%d := r%d = r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, temp -> data, case_register[casecounter]);
                              case_ornot[GlobalTrack.case_or_counter_checker] = GlobalTrack.Instruction;
                              fprintf(output, "%d     pc := ? if not r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              case_or[case_or_counter] = GlobalTrack.Instruction;
                              case_or_counter++;
                              fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                              GlobalTrack.case_or_jump = GlobalTrack.Instruction;
                              GlobalTrack.Instruction++;
                              temp = temp -> next;
                            }
                          }
                        }
                        ;
case_choice_sequence    : expression '|' case_choice_sequence
                        {
                          $3 = insertListNum($3, $1->Reg_Num);
                          $$ = $3;
                          GlobalTrack.case_or = 1;
                        }
                        | expression
                        {
                          PushToPatchStack();
                          struct LLNum_node * headNum;
                          headNum = initNum($1->Reg_Num);
                          $$ = headNum;
                          GlobalTrack.case_or = 0;
                          fprintf(output, "%d     r%d := r%d = r%d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num - 1, case_register[casecounter]);
                          fprintf(output, "%d     pc := ? if not r%d\n", GlobalTrack.Instruction, GlobalTrack.register_Num);
                          AddPatch(GlobalTrack.Instruction);
                          GlobalTrack.register_Num++;
                          GlobalTrack.Instruction++;
                        }
                        | OTHERS
                        {
                          PushToPatchStack();
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                          AddPatchList(GlobalTrack.Instruction, GlobalTrack.Instruction+1);
                          GlobalTrack.Instruction++;
                        }
                        ;
op_param		            : '(' expression_list ')'
                        {
                          $$ = $2;
                        }
                        | %empty
                        {
                          $$ = NULL;
                        }
                        ;
op_assign		            : ASSIGN expression
                        {
                          struct record * record_p = create_new_record();
                          record_p -> Reg_Num = $2 -> Reg_Num;
                          record_p -> isRegister = true;
                          record_p -> Offset = $2 -> Offset;
                          record_p -> Global = $2 -> Global;
                          record_p -> Value = 1;
                          $$ = record_p;
                        }
                        | ASSIGN enum_list
                        {
                          struct record * record_p = create_new_record();
                          record_p -> enum_val = 1;
                          record_p -> Value = 1;
                          record_p -> Reg_Num = $2 -> Reg_Num;
                          record_p -> isRegister = true;
                          $$ = record_p;
                        }
                        | %empty
                        {
                          struct record * record_p = create_new_record();
                          record_p -> Value = 0;
                          $$ = record_p;
                        }
                        ;
enum_list               : ID TICK ID '(' expression ')'
                        {
                          struct record * record_p = create_new_record();
                          node_t * outcome = Search($1);
                          node_t * outcome1 = Search($3);
                          if (strcmp(outcome1 -> var, "pos") == 0) {
                            record_p -> enum_val = $5 -> Value;
                            record_p -> Reg_Num = $5 -> Reg_Num;
                          } else if (strcmp(outcome1 -> var, "succ") == 0) {
                            record_p -> enum_val = $5 -> Value + 1;
                            fprintf(output, "%d     r%d := r%d + 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, $5 -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          } else if (strcmp(outcome1 -> var, "pred") == 0) {
                            record_p -> enum_val = $5 -> Value - 1;
                            fprintf(output, "%d     r%d := r%d - 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, $5 -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          }
                          $$ = record_p;
                        }
                        | ID TICK ID '(' enum_list ')'
                        {
                          struct record * record_p = create_new_record();
                          node_t * outcome = Search($1);
                          node_t * outcome1 = Search($3);
                          if (strcmp(outcome1 -> var, "pos") == 0) {
                            record_p -> enum_val = $5 -> Value;
                            record_p -> Reg_Num = $5 -> Reg_Num;
                          } else if (strcmp(outcome1 -> var, "succ") == 0) {
                            record_p -> enum_val = $5 -> Value + 1;
                            fprintf(output, "%d     r%d := r%d + 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, $5 -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          } else if (strcmp(outcome1 -> var, "pred") == 0) {
                            record_p -> enum_val = $5 -> Value - 1;
                            fprintf(output, "%d     r%d := r%d - 1\n", GlobalTrack.Instruction, GlobalTrack.register_Num, $5 -> Reg_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          }
                          $$ = record_p;
                        }
                        | ID TICK ID
                        {
                          struct record * record_p = create_new_record();
                          node_t * outcome = Search($1);
                          node_t * outcome1 = Search($3);
                          if (strcmp(outcome1 -> var, "LAST") == 0) {
                            record_p -> enum_val = outcome -> value;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome ->parent_type->value);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          } else if (strcmp(outcome1 -> var, "FIRST") == 0) {
                            record_p -> enum_val = outcome -> value;
                            fprintf(output, "%d     r%d := 0\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                            record_p -> Reg_Num = GlobalTrack.register_Num;
                            GlobalTrack.register_Num++;
                          }
                          $$ = record_p;
                        }
                        ;
expression_list         : expression ',' expression_list
                        {
                          int temp = $1 -> Value;
                          bool temp2 = $1 -> GlobalCheck;
                          int temp3 = $1 -> Offset;
                          int temp4 = $1 -> Reg_Num;
                          $3 = insertRW($3, $1);
                          if ($1 -> Global == true) {
                            $3 -> record_List -> Global = true;
                          }
                          if ($1 -> isRegister == true) {
                            $3 -> record_List -> isRegister = true;
                          }
                          $3 -> record_List -> Value = 1;
                          $3 -> record_List -> check = temp;
                          $3 -> record_List -> Offset = temp3;
                          $3 -> record_List -> Reg_Num = temp4;
                          $$ = $3;
                        }
                        | expression
                        {
                          int temp = $1 -> Value;
                          bool temp2 = $1 -> GlobalCheck;
                          int temp3 = $1 -> Offset;
                          int temp4 = $1 -> Reg_Num;
                          struct LL_RW * RW  = initRW($1);
                          if ($1 -> Global == true) {
                            RW -> record_List -> Global = true;
                          }
                          if ($1 -> isRegister == true) {
                            RW -> record_List -> isRegister = true;
                          }
                          RW -> record_List -> Value = 1;
                          RW -> record_List -> check = temp;
                          RW -> record_List -> Offset = temp3;
                          RW -> record_List -> Reg_Num = temp4;
                          $$ = RW;
                        }
                        ;
loop_part               : loop_start loop_stmt_list ENDLOOP ';'
            			      {
                          fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, $1);
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
            		      	}
                        ;
loop_start              : LOOP
                  			{
                          PushToPatchStack();
                          $$ = GlobalTrack.Instruction;
                  			}
                        ;
loop_stmt_list          : loop_stmt
                        | loop_stmt_list loop_stmt
                        ;
loop_stmt               : statement
                        | exit_cond
                        ;
exit_cond               : EXIT ';'
                  			{
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                  			}
                        | EXITWHEN condition ';'
                        {
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ? if r%d\n", GlobalTrack.Instruction++, $2->Reg_Num);
                        }
                        ;
condition               : expression
				                {
                          $$ = $1;
                        }
                        ;
if_statement            : if_start else_if else ENDIF ';'
                        {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                        }
                        ;
if_start                : if_begin condition then sequence_of_statements
                        {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction+1);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                        }
                        ;
if_begin                : IF
                        {
                          PushToPatchStack();
                        }
                        ;
                        ;
else_if                 : else_if_start else_if
                        | %empty
                        ;
else_if_start           : else_if_begin condition then sequence_of_statements
                        {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction+1);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                        }
                        ;
else_if_begin           : ELSEIF
                        ;
else                    : else_begin sequence_of_statements
                        {
                          struct patch_list * temp = ToPatch_Arr[ToPatchCounter];
                          while (temp != NULL) {
                            AddPatchList(temp->location, GlobalTrack.Instruction+1);
                            temp = temp->next;
                          }
                          PopToPatchStack();
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                        }
                        | %empty
                        ;
else_begin              : ELSE
                        {
                          PushToPatchStack();
                        }
                        ;
then                    : THEN
                        {
                          PushToPatchStack();
                          int temp = GlobalTrack.register_Num-1;
                          AddPatch(GlobalTrack.Instruction);
                          fprintf(output, "%d     pc := ? if not r%d\n", GlobalTrack.Instruction++, temp);
                        }
                        ;
expression              : relation
                        {
                          $$ = $1;
                        }
                        | expression boolean_operation relation
                        {
                          struct record * record_p = create_new_record();
                          record_p -> Reg_Num = GlobalTrack.register_Num++;
                          record_p -> isRegister = true;
                          fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);
                          if ($1->Global) {
                            fprintf(output, "contents r%d, %d ", $1->Reg_Num, $1->Offset);
                          } else if ($1->isRegister) {
                            fprintf(output, "r%d ", $1->Reg_Num);
                          } else {
                            fprintf(output, "contents b, %d ", $1->Offset);
                          }

                          //Print relational operation
                          fprintf(output, "%s ", $2);

                          if ($3->Global) {
                            fprintf(output, "contents r%d, %d\n", $3->Reg_Num, $3->Offset);
                          } else if ($3->isRegister) {
                            fprintf(output, "r%d \n", $3->Reg_Num);
                          } else {
                            fprintf(output, "contents b, %d\n", $3->Offset);
                          }
                          $$ = record_p;
                        }
                        ;
relation                : simple_expression
                        {
                          $$ = $1;
                        }
                        | relation relational_operation simple_expression
                        {
                          struct record * record_p = create_new_record();
                          record_p -> Reg_Num = GlobalTrack.register_Num++;
                          record_p -> isRegister = true;
                          fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);
                          if (strcmp($2, ">") == 0) {
                            if ($3->Global) {
                              fprintf(output, "contents r%d, %d ", $3->Reg_Num, $3->Offset);
                            } else if ($3->isRegister) {
                              fprintf(output, "r%d ", $3->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d ", $3->Offset);
                              }

                              //Print relational operation
                              fprintf(output, "< ");

                              if ($1->Global) {
                                fprintf(output, "contents r%d, %d\n", $1->Reg_Num, $1->Offset);
                              } else if ($1->isRegister) {
                                fprintf(output, "r%d \n", $1->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d\n", $1->Offset);
                              }
                            } else if (strcmp($2,">=") == 0) {
                              if ($3->Global) {
                                fprintf(output, "contents r%d, %d ", $3->Reg_Num, $3->Offset);
                              } else if ($3->isRegister) {
                                fprintf(output, "r%d ", $3->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d ", $3->Offset);
                              }

                              //Print relational operation
                              fprintf(output, "<= ");

                              if ($1->Global) {
                                fprintf(output, "contents r%d, %d\n", $1->Reg_Num, $1->Offset);
                              } else if ($1->isRegister) {
                                fprintf(output, "r%d \n", $1->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d\n", $1->Offset);
                              }
                            } else {
                              if ($1->Global) {
                                fprintf(output, "contents r%d, %d ", $1->Reg_Num, $1->Offset);
                              } else if ($1->isRegister) {
                                fprintf(output, "r%d ", $1->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d ", $1->Offset);
                              }

                              //Print relational operation
                              fprintf(output, "%s ", $2);

                              if ($3->Global) {
                                fprintf(output, "contents r%d, %d\n", $3->Reg_Num, $3->Offset);
                              } else if ($3->isRegister) {
                                fprintf(output, "r%d \n", $3->Reg_Num);
                              } else {
                                fprintf(output, "contents b, %d\n", $3->Offset);
                              }
                            }
                            $$ = record_p;
                          }
                          ;
simple_expression         : term
                          {
                            $$ = $1;
                          }
                          | '-' term
                          {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            fprintf(output, "%d     r%d := - ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ($2->isRegister) {
                              fprintf(output, "r%d \n", $2->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", $2->Offset);
                            }
                            $$ = record_p;
                          }
                          | simple_expression adding_operation term
                          {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ($1->Global) {
                              fprintf(output, "contents r%d, %d ", $1->Reg_Num, $1->Offset);
                            } else if ($1->isRegister) {
                              fprintf(output, "r%d ", $1->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d ", $1->Offset);
                            }

                            //Print + or -
                            fprintf(output, "%s ", $2);

                            if ($3->Global) {
                              fprintf(output, "contents r%d, %d \n", $3->Reg_Num, $3->Offset);
                            } else if ($3->isRegister) {
                              fprintf(output, "r%d \n", $3->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", $3->Offset);
                            }
                            $$ = record_p;
                          }
                          ;
term                      : factor
                          {
                            $$ = $1;
                          }
                          | term multiplying_operation factor
                          {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            record_p -> Global = false;
                            fprintf(output, "%d     r%d := ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ($1->Global) {
                              fprintf(output, "contents r%d, %d ", $1->Reg_Num, $1->Offset);
                            } else if ($1->isRegister) {
                              fprintf(output, "r%d ", $1->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d ", $1->Offset);
                            }

                            //Print * or /
                            fprintf(output, "%s ", $2);

                            if ($3->Global) {
                              fprintf(output, "contents r%d, %d \n", $3->Reg_Num, $3->Offset);
                            } else if ($3->isRegister) {
                              fprintf(output, "r%d \n", $3->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", $3->Offset);
                            }
                            $$ = record_p;
                          }
                          ;
factor                    : primary
                          {
                            $$ = $1;
                          }
                          | primary EXP primary
                          {
                            struct record * record_p = create_new_record();
                            record_p -> isRegister = true;
                            record_p -> Global = false;
                            int firstReg = $1 -> Reg_Num;

                            if ($1->Global) {
                              fprintf(output, "%d     r%d := contents r%d, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $1->Reg_Num, $1->Offset);
                            } else if ($1->isRegister) {
                              fprintf(output, "%d     r%d := r%d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $1->Reg_Num);
                            } else {
                              fprintf(output, "%d     r%d := contents b, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $1->Offset);
                            }

                            int secondReg = $3 -> Reg_Num;
                            if ($1->Global) {
                              fprintf(output, "%d     r%d := contents r%d, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $3->Reg_Num, $3->Offset);
                            } else if ($1->isRegister) {
                              fprintf(output, "%d     r%d := r%d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $3->Reg_Num);
                            } else {
                              fprintf(output, "%d     r%d := contents b, %d \n", GlobalTrack.Instruction++, GlobalTrack.register_Num++, $3->Offset);
                            }

                            int productReg = GlobalTrack.register_Num++;
                            record_p -> Reg_Num = productReg;
                            fprintf(output, "%d     r%d := 1 \n", GlobalTrack.Instruction++, productReg);

                            int decrementReg = GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := 1 \n", GlobalTrack.Instruction++, decrementReg);

                            int pcJumpLine = GlobalTrack.Instruction++;
                            fprintf(output, "%d     r%d := r%d * r%d \n", pcJumpLine, productReg, productReg, firstReg);

                            int compareReg = GlobalTrack.register_Num++;
                            fprintf(output, "%d     r%d := r%d = r%d \n", GlobalTrack.Instruction++, compareReg, secondReg, decrementReg);
                            fprintf(output, "%d     r%d := r%d - r%d \n", GlobalTrack.Instruction++, secondReg, secondReg, decrementReg);
                            fprintf(output, "%d     pc := %d if not r%d \n", GlobalTrack.Instruction++, pcJumpLine, compareReg);

                            $$ = record_p;
                          }
                          | NOT primary
                          {
                            struct record * record_p = create_new_record();
                            record_p -> Reg_Num = GlobalTrack.register_Num++;
                            record_p -> isRegister = true;
                            record_p -> Global = false;
                            fprintf(output, "%d     r%d := not ", GlobalTrack.Instruction++, record_p->Reg_Num);

                            //Handle Left hand sideof operation
                            if ($2->Global) {
                              fprintf(output, "contents r%d, %d \n", $2->Reg_Num, $2->Offset);
                            } else if ($2->isRegister) {
                              fprintf(output, "r%d \n", $2->Reg_Num);
                            } else {
                              fprintf(output, "contents b, %d \n", $2->Offset);
                            }
                            strcpy(record_p->Identifier, $2->Identifier);
                            $$ = record_p;
                          }
                          ;
primary                   : NUMBER
                          {
                            struct record * record_p = create_new_record();
                            record_p->Value = $1;
                            record_p->Reg_Num = GlobalTrack.register_Num++;
                            record_p -> Global = false;
                            record_p->isRegister = true;
                            fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, record_p->Reg_Num, $1);
                            $$ = record_p;
                          }
                          | ID
                          {
                            struct record * record_p = create_new_record();
                            node_t * outcome = Search($1); //Search for $1 in Global Tree
                            int x = SearchPosition($1); //Check if it is local
                            strcpy(record_p->Identifier, $1);
                            if (strcmp(outcome->kind, "literal") == 0) {
                              record_p -> Value = outcome -> value;
                              record_p->Reg_Num = GlobalTrack.register_Num++;
                              record_p->isRegister = true;
                              fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, record_p->Reg_Num, record_p -> Value);
                              $$ = record_p;
                            } else if (strcmp(outcome->kind, "enumeration") == 0) {
                              record_p -> Value = outcome -> value;
                              record_p->Reg_Num = GlobalTrack.register_Num++;
                              record_p->isRegister = true;
                              fprintf(output, "%d     r%d := %d\n", GlobalTrack.Instruction++, record_p->Reg_Num, record_p -> Value);
                              $$ = record_p;
                            } else {
                              if (x == 0) { //Local Variable
                                record_p -> Offset = outcome -> offset;
                                fprintf(output, "%d     r%d := contents b, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, outcome->offset);
                                record_p->Reg_Num = GlobalTrack.register_Num++;
                                record_p -> isRegister = true;
                              } else { //Global Variable
                                fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                                while (x > 0) {
                                  fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                  x--;
                                }
                                record_p -> Offset = outcome -> offset;
                                record_p -> Reg_Num = GlobalTrack.register_Num++;
                                record_p -> Global = true;
                                record_p -> isRegister = true;
                              }
                            }
                            $$ = record_p;
                          }
                          | '(' expression ')'
                          {
                            $$ = $2;
                          }
                          | ID '(' expression ')'
                          {
                            struct record * record_p = create_new_record();
                            node_t * outcome = Search($1); //Search for $1 in Global Tree
                            int x = SearchPosition($1); //Check if it is local
                            if (x == 0) { //Local
                              int temp = outcome -> offset - outcome -> lower;
                              fprintf(output, "%d     r%d := contents b, r%d, %d\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, $3 -> Reg_Num, temp);
                              record_p -> Offset = outcome -> offset;
                              record_p -> Reg_Num = GlobalTrack.register_Num++;
                              record_p -> isRegister = true;
                            } else { //Global
                              fprintf(output, "%d     r%d := b\n", GlobalTrack.Instruction++, GlobalTrack.register_Num);
                              while (x > 0) {
                                fprintf(output, "%d     r%d := contents r%d, 2\n", GlobalTrack.Instruction++, GlobalTrack.register_Num, GlobalTrack.register_Num);
                                x--;
                              }
                              record_p -> Offset = outcome -> offset;
                              record_p -> Reg_Num = GlobalTrack.register_Num++;
                              record_p -> Global = true;
                              record_p -> GlobalCheck = 1;
                              record_p -> isRegister = true;
                            }
                            $$ = record_p;
                          }
                          ;
boolean_operation         : AND
                          {
                            strcpy($$, "and");
                          }
                          | OR
                          {
                            strcpy($$, "or");
                          }
                          ;
relational_operation      : EQ
                          {
                            strcpy($$, "=");
                          }
                          | NEQ
                          {
                            strcpy($$, "/=");
                          }
                          | LT
                          {
                            strcpy($$, "<");
                          }
                          | GT
                          {
                            strcpy($$, ">");
                          }
                          | GTE
                          {
                            strcpy($$, ">=");
                          }
                          | LTE
                          {
                            strcpy($$, "<=");
                          }
                          ;
adding_operation          : '+'
                          {
                            strcpy($$, "+");
                          }
                          | '-'
                          {
                            strcpy($$, "-");
                          }
                          ;
multiplying_operation     : '*'
                          {
                            strcpy($$, "*");
                          }
                          | '/'
                          {
                            strcpy($$, "/");
                          }
                          ;
exception_part            : exception_start exceptionList
                          {
                            GlobalTrack.handler_done = false;
                            AddPatchList(GlobalTrack.instruction_counter, GlobalTrack.Instruction-1);
                            int temp = GlobalTrack.Instruction + GlobalTrack.next_exception - 1;
                            jumpcounter = 1;
                            while (jumpcounter < GlobalTrack.next_exception) {
                              if (jump_table[jumpcounter] != 0) {
                                fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, jump_table[jumpcounter]);
                              } else {
                                jump_table[jumpcounter] = temp;
                                fprintf(output, "%d     pc := %d\n", GlobalTrack.Instruction++, jump_table[jumpcounter]);
                              }
                              jumpcounter++;
                            }
                            int i = 0;
                            while (i <= 10) {
                              jump_table[i] = 0;
                              i++;
                            }
                             GlobalTrack.in_exception_part = false;
                             struct patch_list * temper = ToPatch_Arr[ToPatchCounter];
                             while (temper != NULL) {
                               AddPatchList(temper->location, GlobalTrack.Instruction);
                               temper = temper->next;
                             }
                             PopToPatchStack();
                           }
                           | %empty
                           {
                             if (GlobalTrack.instruction_counter == 0 && GlobalTrack.raise_list != 0) {
                               AddPatchList(GlobalTrack.raise_list, GlobalTrack.Instruction);
                             } else {
                               for (int i = 0; i < GlobalTrack.instruction_counter; i++) {
                                 AddPatchList(GlobalTrack.raise_list, GlobalTrack.Instruction);
                               }
                             }
                             GlobalTrack.raise_list = 0;
                           }
                           ;
exception_start            : EXCEPTION
                           {
                             GlobalTrack.in_exception_part = true;
                             PushToPatchStack();
                             AddPatch(GlobalTrack.Instruction);
                             fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction++);
                             AddPatchList(GlobalTrack.raise_list, GlobalTrack.Instruction);
                             GlobalTrack.instruction_counter = GlobalTrack.Instruction;
                             fprintf(output, "%d     pc := r1, ?\n", GlobalTrack.Instruction++);
                           }
                           ;
exceptionList              : exceptionList exceptionHandler
                           | exceptionHandler
                           ;
exceptionHandler           : WHEN choice_sequence ARROW sequence_of_statements
                           {
                             fprintf(output, "%d     r1 := 0\n", GlobalTrack.Instruction++);
                             fprintf(output, "%d     pc := ?\n", GlobalTrack.Instruction);
                             GlobalTrack.raise_list = GlobalTrack.Instruction;
                             AddPatch(GlobalTrack.raise_list);
                             GlobalTrack.Instruction++;
                           }
                           ;
choice_sequence            : choice_sequence '|' ID
                           | ID
                           {
                             if (GlobalTrack.handler_done == false) {
                               node_t * outcome = Search($1);
                               if(strcmp(outcome->kind, "exception") == 0) {
                                 jump_table[outcome->ival] = GlobalTrack.Instruction;
                                 GlobalTrack.raise_list_counter++;
                               }
                             }
                           }
                           | OTHERS
                           {
                             if (GlobalTrack.handler_done == false) {
                               GlobalTrack.handler_done = true;
                               jumpcounter = 0;
                               jump_table[1] = GlobalTrack.Instruction;
                               while (jumpcounter < 10) {
                                 if (jump_table[jumpcounter] == 0) {
                                   jump_table[jumpcounter] = GlobalTrack.Instruction;
                                 }
                                 jumpcounter++;
                               }
                             }
                           }
                           ;
%%
int main()
{
  output = fopen("./simple.out", "w");
  OuterContext();
  yyparse();
  fclose(output);
}
