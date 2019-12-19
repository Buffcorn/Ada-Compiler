#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 20

int current_pos = 0;
int OffsetArr[50];
bool RW = false;
int RWCounter = 0;
int RWArr[50];
int jumpcounter = 0;
int casecounter = 0;
int case_or_counter = 0;
int case_or_counter_temp = 0;
int if_counter = 0;
int procedure_counter = 0;

typedef struct GlobalRecord {
	int Instruction;
	int register_Num;
	int next_exception;
	bool in_exception_part;
	int raise_list;
        int raise_list_counter;
	bool handler_done;
	int instruction_counter;
        int case_or;
        int case_or_temp;
        int case_or_jump;
        int case_or_counter_checker;
        int case_or_not_jump;
        int enum_counter;
        int exception_jump;
}record_global;

int jump_table[10] = {0,0,0,0,0,0,0,0,0,0};
int case_register[10];
int case_or[10];
int case_ornot[10];

struct record {
	char Identifier [20];
	char Parent_type [20];
	int Value;
	int check;
	int enum_val;
	int Reg_Num;
	int GlobalCheck;
	int Offset;
	bool isRegister;
	bool Global;
};

struct record * create_new_record () {
	struct record * new_record = (struct record *)malloc(sizeof(struct record));
  	strcpy(new_record->Identifier, " ");
  	strcpy(new_record->Parent_type, " ");
	new_record->Value = 0;
	new_record->check = 0;
	new_record->GlobalCheck = 0;
	new_record->Reg_Num = 0;
	new_record->Offset = 0;
	new_record->isRegister = false;
	new_record->Global = false;
	return new_record;
};

void incrementOffset(int num) {
	int i = OffsetArr[current_pos];
	OffsetArr[current_pos] = num + i;
}

int currentOffset() {
	return OffsetArr[current_pos];
}

void nextOffset() {
	current_pos++;
}

void prevOffset() {
	OffsetArr[current_pos] = 0;
	current_pos--;
}
