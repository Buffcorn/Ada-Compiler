/*
 Itaru Fujiwara
 Biary Tree

 Taken from https://www.learn-c.org/en/Binary_trees
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 20

// Declare variablesu
//void Question();
void Push(char temp[]);
void Pop();
void Add();
void Local();
int SearchPosition(char String[]);
int i = 0;
void OuterContext();

typedef struct node {
  char var[MAX];
  struct node *left;
  struct node *right;

  char kind [MAX];
  char name [MAX];
  char mode [MAX];

  struct node * parent_type;
  struct node * next;
  struct node * component_type;

  int is_proc;
  int value;
  int lower;
  int upper;
  int offsetinit;
  int offset;
  int Reg_Num;
  int Proc_Beg;
  int Size_of;
  int ival;

} node_t;


node_t * Search(char String[]);

struct node * create_new_node (char string[]) {
  node_t * new_node = (node_t*)malloc(sizeof(node_t));
  strcpy(new_node->var, string);
  new_node->left = NULL;
  new_node->right = NULL;

  strcpy(new_node->kind, " ");
  strcpy(new_node->name, " ");
  strcpy(new_node->mode, " ");

  new_node->parent_type = NULL;
  new_node->next = NULL;
  new_node->component_type = NULL;

  new_node->is_proc = 0;
  new_node->value = 0;
  new_node->lower = 0;
  new_node->upper = 0;
  new_node->offset = 0;
  new_node->offsetinit = 0;
  new_node->Reg_Num = 0;
  new_node->Proc_Beg = 0;
  new_node->Size_of = 1;
  new_node->ival = 0;
  return new_node;
};

typedef struct ArrStack {
  char Key [20];
  node_t *Root;
} ArrStack_t;

node_t * insert(node_t * subRoot, char Temp[]);
node_t * RecursiveSearch(node_t * subRoot, char Temp[]);
void printDFS(node_t *current);

// Declare array of struct size MAX
ArrStack_t arr[MAX];
//Declare struct of node
node_t *Tree;


//Push Function
void Push(char temp[]) {
  if(i == MAX) { //Check if Stack is full.
    printf("Message: Stack is full!!\n");
  } else {
    i = i+1; //Add one to the Stack.
    strcpy(arr[i].Key, temp);
    printf("\nPushing new scope for %s \n", arr[i].Key);
    arr[i].Root = NULL; //Set the new stack to NULL.
  }
}

//Pop Function
void Pop() {
  if(i==-1)	{ //Check if the stack isnt empty.
    //printf("Message: Stack is empty!!\n");
  } else { // Remove the top most stack from the array.
    //printf("Message: Deleted %s from the stack\n", arr[i].Key);
    //printf("Popping scope for %s, so print tree\n", arr[i].Key);
    i=i-1;
  }
}

//Add Function
void Add(char Temp[]) {
  if (i < 0) { //Check if the array is empty.
    printf("Message: Stack is empty. Please push a tree onto the stack.\n");
  } else { // Push a string into the stack.
    arr[i].Root = insert(arr[i].Root, Temp); // call insert and have Root point to what it returns.
  }
}

//Insert Function
node_t * insert(node_t * subRoot, char Temp[]) {
  if (subRoot == NULL) { //Check if the node is empty.
    subRoot = (node_t *)malloc(sizeof(node_t)); //Allocate space for subroot.
    strcpy(subRoot -> var, Temp); // copy string into var.
    subRoot -> left = NULL;
    subRoot -> right = NULL;
    //printf("Message: Successfully added symbol %s to the tree %s. \n", Temp, arr[i].Key);
  } else if (strcmp(Temp, subRoot -> var) < 0) { //insert into left subroot.
    subRoot -> left = insert(subRoot -> left, Temp);
  } else if (strcmp(Temp, subRoot -> var) > 0) {
    subRoot -> right = insert(subRoot -> right, Temp); //insert into right subroot.
  } else {
    printf("     ERROR: Duplicate IDs\n");
    //printf("Message: The symbol %s you typed is already in the binary tree.\n", Temp);
    return NULL;
  }
  return subRoot;
}

//Local Search
void Local() {
  if (i < 0) { //Check if stack is empty.
    //printf("Message: Stack is empty. Please push a tree onto the stack.\n");
  } else {
    char String[20];
    node_t * outcome;
    //printf("The Local Tree is: %s \n", arr[i].Key);
    //printf("Enter String you would like to search: \n");
    scanf("%s", String);
    outcome = RecursiveSearch(arr[i].Root, String); //outcome points to the resulrt of RecursiveSearch.
    if (outcome != NULL) {
      //printf("Message: The symbol %s is in the local tree %s.\n", String, arr[i].Key);
    } else {
      //printf("Message: The symbol %s does not exist in the local tree %s. \n", String, arr[i]. Key);
    }
  }
}

// Recursive Search
node_t * RecursiveSearch(node_t * subRoot, char Temp[]) {
  if (subRoot == NULL) { // If subRoot is NULL, it doest not exist in the Tree.
    return NULL;
  } else {
    //printf("Looking at the symbol: %s \n", subRoot -> var);
    //printf("Target is: %s \n", Temp);
    if (strcmp(subRoot -> var, Temp) == 0) {
      return subRoot; // subRoot equals the Target.
    } else if (strcmp(subRoot -> var, Temp) < 0) {
      return RecursiveSearch(subRoot -> right, Temp);
    } else if (strcmp(subRoot -> var, Temp) > 0) {
      return RecursiveSearch(subRoot -> left, Temp);
    }
  }
}


//Full Stack Search
node_t * Search(char String[]) {
  int j = i;
  int x = 0;
  int number = 0;
  char temp[20];
  if (i<0) { //Check if stack is empty.
    printf("Message: Stack is empty. Please push a tree onto the stack.\n");
  } else {
    node_t * outcome;
    while(j > -1) { //Search from Top-Down on the stack.
      outcome = RecursiveSearch(arr[j].Root, String);// Outcome points to RecursiveSearch.
      //printf("Looking at tree %s.\n", arr[j].Key);
      if (outcome != NULL) { // If outcome does not equal NULL the target word was found
	return outcome;
	}
      x++;
      j--;
    }
    outcome = NULL;
    return outcome;
  }
}


//Full Stack Search
int SearchPosition(char String[]) {
  int j = i;
  int x = 0;
  int number = 0;
  char temp[20];
  if (i<0) { //Check if stack is empty.
    printf("Message: Stack is empty. Please push a tree onto the stack.\n");
  } else {
    node_t * outcome;
    while(j > -1) { //Search from Top-Down on the stack.
      outcome = RecursiveSearch(arr[j].Root, String);// Outcome points to RecursiveSearch.
      if (outcome != NULL) { // If outcome does not equal NULL the target word was found
	return x;
	}
      x++;
      j--;
    }
  }
}


void OuterContext() {
	char temp[20] = "Outer_Context";
    	strcpy(arr[i].Key, temp);
    	printf("\n%s \n", arr[0].Key);
    	arr[i].Root = NULL; //Set the new stack to NULL.

	Add("boolean");
	char temp1[20] = "boolean";
   	node_t * outcome = RecursiveSearch(arr[i].Root, temp1);
	strcpy(outcome->var, "boolean");
	strcpy(outcome->kind, "type");
	outcome -> offset = 1;
	printf("     boolean - %s\n", outcome->kind);

	Add("integer");
	char temp2[20] = "integer";
   	node_t * outcome2 = RecursiveSearch(arr[i].Root, temp2);
	strcpy(outcome2->var, "integer");
	strcpy(outcome2->kind, "type");
	outcome2 -> offset = 1;
	printf("     integer - %s\n", outcome2->kind);

	Add("true");
	char temp3[20] = "true";
	node_t * outcome3 = RecursiveSearch(arr[i].Root, temp3);
	strcpy(outcome3->var, "true");
	strcpy(outcome3->kind, "literal");
	outcome3 -> value = 1;
	outcome3 -> offset = 1;
	printf("     true    - %s\n", outcome3->kind);

	Add("false");
	char temp4[20] = "false";
   	node_t * outcome4 = RecursiveSearch(arr[i].Root, temp4);
	strcpy(outcome4->var, "false");
	strcpy(outcome4->kind, "literal");
	outcome4 -> value = 0;
	outcome4 -> offset = 1;
	printf("     false   - %s\n", outcome4->kind);

	Add("maxint");
	char temp5[20] = "maxint";
   	node_t * outcome5 = RecursiveSearch(arr[i].Root, temp5);
	strcpy(outcome5->var, "maxint");
	strcpy(outcome5->kind, "value");
	outcome5 -> offset = 1;
	printf("     maxint  - %s\n", outcome5->kind);

	Add("read");
	char temp6[20] = "read";
   	node_t * outcome6 = RecursiveSearch(arr[i].Root, temp6);
	strcpy(outcome6->var, "read");
	strcpy(outcome6->kind, "read_routine");
	printf("     read  - %s\n", outcome6->kind);

	Add("write");
	char temp7[20] = "write";
   	node_t * outcome7 = RecursiveSearch(arr[i].Root, temp7);
	strcpy(outcome7->var, "write");
	strcpy(outcome7->kind, "write_routine");
	printf("     write  - %s\n", outcome7->kind);

	Add("constraint_error");
	char temp8[20] = "constraint_error";
   	node_t * outcome8 = RecursiveSearch(arr[i].Root, temp8);
	strcpy(outcome8->var, "constraint_error");
	strcpy(outcome8->kind, "exception");
	outcome8 -> ival = 1;
	outcome8 -> offset = 1;
	printf("     constraint_error  - %s\n", outcome8->kind);

	Add("numeric_error");
	char temp9[20] = "numeric_error";
   	node_t * outcome9 = RecursiveSearch(arr[i].Root, temp9);
	strcpy(outcome9->var, "numeric_error");
	strcpy(outcome9->kind, "exception");
	outcome9 -> ival = 2;
	outcome9 -> offset = 1;
	printf("     numeric_error  - %s\n", outcome9->kind);\

	Add("pos");
	char temp10[20] = "pos";
   	node_t * outcome10 = RecursiveSearch(arr[i].Root, temp10);
	strcpy(outcome10->var, "pos");
	strcpy(outcome10->kind, "enumeration");
	printf("     pos  - %s\n", outcome10->kind);

        Add("succ");
	char temp11[20] = "succ";
   	node_t * outcome11 = RecursiveSearch(arr[i].Root, temp11);
	strcpy(outcome11->var, "succ");
	strcpy(outcome11->kind, "enumeration");
	printf("     succ  - %s\n", outcome11->kind);

        Add("pred");
	char temp12[20] = "pred";
   	node_t * outcome12 = RecursiveSearch(arr[i].Root, temp12);
	strcpy(outcome12->var, "pred");
	strcpy(outcome12->kind, "enumeration");
	printf("     pred  - %s\n", outcome12->kind);

        Add("LAST");
	char temp13[20] = "LAST";
   	node_t * outcome13 = RecursiveSearch(arr[i].Root, temp13);
	strcpy(outcome13->var, "LAST");
	strcpy(outcome13->kind, "enumeration");
	printf("     LAST  - %s\n", outcome13->kind);

        Add("FIRST");
	char temp14[20] = "FIRST";
   	node_t * outcome14 = RecursiveSearch(arr[i].Root, temp14);
	strcpy(outcome14->var, "FIRST");
	strcpy(outcome14->kind, "enumeration");
	printf("     FIRST  - %s\n", outcome14->kind);
}

/* depth-first search */
void printDFS(node_t * current) {
  /* change the code here */
  if (current == NULL)         return;   /* security measure */
  if (current -> left != NULL)   printDFS(current->left);
  if (current != NULL) {
	if ( strcmp(current->kind, "variable") == 0) {
		printf("     %s - object w/ parent type %s\n", current -> var, current->parent_type->var);
	} else if ( strcmp(current->kind, "procedure") == 0) {
		printf("     %s - procedure\n", current -> var);
	} else {
		printf("     %s - type(%s) \n", current->var, current->kind);
	}
  }
  if (current->right != NULL)  printDFS(current->right);
}
