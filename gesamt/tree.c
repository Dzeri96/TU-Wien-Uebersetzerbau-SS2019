#include <stdlib.h>
#include <stdio.h>

#include "tree.h"
#include "assembler.h"

/*tree_t *newLeaf(int op) {
	tree_t *new=(tree_t *)malloc(sizeof(tree_t));
	

	new->child[0]=(tree_t *)NULL;
	new->child[1]=(tree_t *)NULL;
	new->operator=op;
	new->name=(char *)NULL;

	return new;
}*/

tree_t *newLeaf(int op) {
	return newNode(op,NULL,NULL);
}

tree_t *newNUMLeaf(long value) {
	tree_t *node;

        if(value==0) {
		node=newLeaf(OP_Zero);
	}
	else if(value==1) {
		node=newLeaf(OP_One);
	}
	else {
		node=newLeaf(OP_Number);
        }

	node->value=value;

	return node;
}

tree_t *newIDLeaf(int operator, char * name, int paramIndex, short regIndex){
	tree_t *new=(tree_t *)malloc(sizeof(tree_t));
	
	new->child[0]=(tree_t *)NULL;
	new->child[1]=(tree_t *)NULL;
	new->operator=operator;
	new->name=name;
	new->parameter=paramIndex;
	new->regIndex = regIndex;

	return new;
}

tree_t *newNode(int operator, tree_t *left, tree_t *right) {
	tree_t *new=(tree_t *)malloc(sizeof(tree_t));

	new->child[0]=left;
	new->child[1]=right;
	new->operator=operator;
	new->name=(char *)NULL;

	return new;
}

void typeMis(){
	fprintf(stderr, "ERROR: Type Missmatch!\n");
	exit(3);
}

char *longToStr(long nr){
	const int n = snprintf(NULL, 0, "%li", nr);
	char *buf = malloc(sizeof(char) * 15);
	snprintf(buf, n+1, "%li", nr);
	return buf;
}

void guardJmpPrint(int isCont, char *idName, char *condName){
	char *labName;
	char *suffix;
	if(isCont){
		suffix = "_start";
	}else{
		suffix = "_end";
	}

	if(idName != NULL){
		labName = idName;
	}else{
		labName = condName;
	}

	printf("\tjmp cond_%s%s\n", labName, suffix);
}
