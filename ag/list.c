#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

list_t* newList(){
	return (list_t*) NULL;
}

list_t* mergeLists(list_t* list1, list_t* list2, short errorOnDuplicate){
	
	list_t* newlist = duplicateList(list1);
	list_t* cur2 = list2;
	while(cur2 != NULL){
		newlist = addToList(newlist, cur2->name, cur2->label, errorOnDuplicate);
		cur2 = cur2->next;
	}
	
	
	return newlist;
}

list_t* addToList(list_t* list, char* name, short label, short errorOnDuplicate){

	list_t *cur,*cur2;
	list_t *node;
	
	cur = list;
	cur2 = list;
	if(cur == NULL){
		cur = (list_t*) malloc (sizeof(list_t));
		cur->name = strdup(name);
		cur->label = label;
		cur->next = NULL;
		return cur;
	}
			
	while(cur != NULL){
		if(strcmp(cur->name, name) == 0){
			if(errorOnDuplicate){
				fprintf(stderr, "Static analysis failed: duplicates %s and %s found!\n",cur->name, name);
				exit(3);
			}
			else{
				return list;
			}
		}
		cur = cur->next;
	}
	node = (list_t*) malloc(sizeof(list_t));
	node->name = strdup(name);
	node->label = label;
	node->next = list; 
	return node;
}

short visCheck(list_t* list, char* name, short label) {
	list_t * node = list;
	short error = 1;
	if(node == NULL){
		fprintf(stderr, "Static analysis failed, node is NULL\n");
		return 1;
	}
	while(node != NULL){
		if(strcmp(node->name, name) == 0 && node->label == label){
			error = 0;
		}
		node = node->next;
	}
	
	if(error != 0){
		fprintf(stderr, "Static analysis failed, %s used but not in scope\n",name);
		return 1;
	}
	return 0;
}

void isVisible(list_t* list, char* name, short label){
	if(visCheck(list,name,label) != 0){
		exit(3);
	}	
}

void overlaps(list_t* list, char*name, short label){
	if(visCheck(list,name,label) == 0){
		fprintf(stderr,"Static analysis failed, %s overlaps visibility area\n",name);
		exit(3);
	}
}

list_t* duplicateList(list_t* list){
	list_t* newlist = newList();
	list_t* cur = list;
	if(list == NULL)
		return newlist;
	while(cur != NULL){
		newlist = addToList(newlist, cur->name, cur->label, TRUE);
		cur = cur->next;
	}
	return newlist;
}

