#ifndef CODE
typedef struct burm_state *STATEPTR_TYPE; 
#endif

typedef struct tree_t{
	int operator;
	struct tree_t *child[2];
	STATEPTR_TYPE stateLabel;
	char *name;
	long value;
	char *reg;
	struct tree_t *parent;
	int parameter;
}tree_t;

typedef tree_t *treepointer;

/* macros for burg */
#define NODEPTR_TYPE    	treepointer
#define OP_LABEL(p)     	((p)->operator)
#define LEFT_CHILD(p)   	((p)->child[0])
#define RIGHT_CHILD(p)  	((p)->child[1])
#define STATE_LABEL(p)  	((p)->stateLabel)
#define PANIC			printf


tree_t *newNode(int operator, tree_t *left, tree_t *right);
tree_t *newNUMLeaf(long value);
tree_t *newIDLeaf(int operator, char * name, int paramIndex);
tree_t *newLeaf(int operator);
void typeMis();

enum {
	OP_Not=1,
	OP_Add,
	OP_Mult,
	OP_Minus,
	OP_Or,
	OP_LarOrEq,
	OP_Eq,
	OP_Address,
	OP_Id,
	OP_Number,
	OP_Return,
	OP_Zero,
	OP_One,
	OP_Exprs,
	OP_Call,
	OP_Goto,
	OP_Dot,
	OP_IsList,
	OP_Head,
	OP_Tail
};
