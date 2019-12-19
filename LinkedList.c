/* ## (c) 2017, Arkadiusz Drabczyk, arkadiusz@drabczyk.org */
//https://gist.github.com/ardrabczyk/1cdc413b9eaa9a9a0c4be71d3fc9bc37
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct LL_node {
    char *data;
    struct LL_node *next;
}*LL_node;

LL_node init(char *data)
{
    LL_node new_node;
    new_node = (LL_node)malloc(sizeof(LL_node));
    new_node->data= (char*)malloc(sizeof(data)+1);
    strcpy(new_node->data, data);
    new_node->next = NULL;
    return new_node;
}

LL_node insertList(LL_node head, char *data)
{
    LL_node new = (LL_node)malloc(sizeof(LL_node));
    new->next = head;
    new->data= (char*)malloc(sizeof(data)+1);
    strcpy(new->data, data);
    return new;
}

void print(LL_node head) {
    LL_node current = head;
    while (current != NULL) {
    	if (current-> next != NULL) {
		printf("%s ", current->data);
        	current = current->next;
    	} else if (current->next == NULL) {
		printf("%s :", current->data);
       		current = current->next;
    	}
    }
}

/**********************LINKED LIST FOR NUMBERS*************************/

typedef struct LLNum_node {
    int data;
    struct LLNum_node *next;
}*LLNum_node;

LLNum_node initNum(int data)
{
    LLNum_node new_node;
    new_node = (LLNum_node)malloc(sizeof(LLNum_node));
    new_node-> data = data;
    new_node-> next = NULL;
    return new_node;
}

LLNum_node insertListNum(LLNum_node head, int data)
{
    LLNum_node new = (LLNum_node)malloc(sizeof(LLNum_node));
    new->next = head;
    new->data = data;


    return new;
}

void printNum(LLNum_node head) {
    LLNum_node current = head;
    while (current != NULL) {
    	if (current-> next != NULL) {
		printf("%d ", current->data);
        	current = current->next;
    	} else if (current->next == NULL) {
		printf("%d\n", current->data);
       		current = current->next;
    	}
    }
}

/******************READ WRITE LINKED LIST********************/

typedef struct LL_RW {
	struct record * record_List;
	struct LL_RW * next;
} *LL_RW;

LL_RW initRW(struct record * record_p) {
	LL_RW new_rw = (LL_RW)malloc(sizeof(LL_RW));
	new_rw -> record_List = record_p;
	new_rw -> next = NULL;
	return new_rw;
}

LL_RW insertRW(LL_RW RWHead, struct record * record_p) {
	LL_RW new = (LL_RW)malloc(sizeof(LL_RW));
	new -> record_List = record_p;
	new -> next = RWHead;
	return new;
}

