#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int ToPatchCounter = -1;
FILE *output;

struct patch_list * recursive_insert(struct patch_list * sub_root, int temp);
struct patch_list * recursive_insert_PL(struct patch_list * sub_root, int location, int insert);

/********PatchList Struct ********/
typedef struct patch_list {
  int location;
  int insert;
  struct patch_list * next;
} *patch_t;

patch_t create_new_patch_list (int temp) {
  patch_t new_patch = (patch_t)malloc(sizeof(patch_t));
  new_patch -> location = temp;
  new_patch -> insert = 0;
  new_patch -> next = NULL;
  return new_patch;
}

patch_t create_empty () {
  patch_t new_patch = (patch_t)malloc(sizeof(patch_t));
  new_patch -> location = 0;
  new_patch -> insert = 0;
  new_patch -> next = NULL;
  return new_patch;
}


struct patch_list * PatchListLL;
struct patch_list * ToPatch_Arr[100];

patch_t * AppendPatchList() {
	struct patch_list * temp = PatchListLL;
	while(temp -> next != NULL){
		temp = temp -> next;
	}
}

void PushToPatchStack() {
  ToPatchCounter++;
  ToPatch_Arr[ToPatchCounter] = NULL;
}

void PopToPatchStack() {
	ToPatchCounter--;
}


void AddPatch(int temp) {
	ToPatch_Arr[ToPatchCounter] = recursive_insert(ToPatch_Arr[ToPatchCounter], temp);
}

struct patch_list * recursive_insert(struct patch_list * sub_root, int temp) {
	if (sub_root == NULL) {
		sub_root = create_empty();
		sub_root->location = temp;
	} else {
		sub_root->next = recursive_insert(sub_root->next, temp);
	}
	return sub_root;
}

void AddPatchList(int location, int insert) {
	PatchListLL = recursive_insert_PL(PatchListLL, location, insert);
}

struct patch_list * recursive_insert_PL(struct patch_list * sub_root, int location, int insert) {
	if (sub_root == NULL) {
		sub_root = create_empty();
		sub_root->location = location;
		sub_root->insert = insert;
	} else {
		sub_root->next = recursive_insert_PL(sub_root->next, location, insert);
	}
	return sub_root;
}

/***************BUBBLE SORT*****************/

//https://www.geeksforgeeks.org/c-program-bubble-sort-linked-list/
void swap(struct patch_list *a, struct patch_list *b);
/* Bubble sort the given linked list */
void bubbleSort(struct patch_list * start) 
{ 
    int swapped, i; 
    struct patch_list * ptr1;
    struct patch_list * lptr = NULL;
  
    /* Checking for empty list */
    if (start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->location > ptr1->next->location) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 
  
/* function to swap data of two nodes a and b*/
void swap(struct patch_list *a, struct patch_list *b) 
{ 
    int temp = a->location; 
    a->location = b->location; 
    b->location = temp;     
    int temp2 = a->insert; 
    a->insert = b->insert; 
    b->insert = temp2; 
} 

void printPL(struct patch_list * PatchListLL) {
	struct patch_list * current = PatchListLL;
        fprintf(output, "\n");
    	while (current != NULL) {
    		if (current-> next != NULL) {
			fprintf(output, "%d, %d\n", current->location, current->insert);
        		current = current->next;
    		} else if (current->next == NULL) {
			fprintf(output, "%d, %d\n", current->location, current->insert);
       			current = current->next;
    		}
    	}
        fprintf(output, "\n*********************\n");
        fprintf(output, "DONE WITH PATCH LIST\n");
        fprintf(output, "*********************\n\n");
}

