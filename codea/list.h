
#define FALSE 0
#define TRUE 1

typedef struct list_t{
	char *name;
	short label;
	struct list_t *next;
	short parIndex;
} list_t;

list_t* newList();
list_t* mergeLists(list_t*, list_t*, short);
list_t* addToList(list_t*, char*, short, short, short);
void isVisible(list_t*, char*,short);
void overlaps(list_t*,char*,short);
list_t* duplicateList(list_t*);
list_t* getLabels(list_t*);
short getParIndex(list_t*, char*);

extern int error;
