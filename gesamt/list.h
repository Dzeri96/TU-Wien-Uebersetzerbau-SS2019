
#define FALSE 0
#define TRUE 1

typedef struct list_t{
	char *name;
	short label;
	struct list_t *next;
	short parIndex;
	short regIndex;
} list_t;

list_t* newList();
list_t* mergeLists(list_t*, list_t*, short);
list_t* addToList(list_t*, char*, short, short, short, short);
list_t* addVarToList(list_t*, char*, short, short, short);
void isVisible(list_t*, char*,short);
void overlaps(list_t*,char*,short);
list_t* duplicateList(list_t*);
list_t* getLabels(list_t*);
short getParIndex(list_t*, char*);
short getRegIndex(list_t*, char*);
char *getVarReg(list_t*, char*);
short getNrDefVar(list_t*);
short getNrPar(list_t*);
extern int error;
