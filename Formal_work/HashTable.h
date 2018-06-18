#include <stdio.h>

#define SIZE 1024

int  yylex  (void);
void  yyerror  (const char *str);

int keyId = 1;
int itemDepth = 0;
int acs=0;
char jasm[10000];
char temp_parameter[1000];
char unary_symbol[20];
int now_fun_index = 0;
int function_index = 0;
int tp_fun_index = 0;
int is_print = 0;
int is_assigning = 0;

struct DataItem {
	char idName[100];
	char type[100];
	char value[100];
	int key;
	int depth;
	int fun_index;
};

struct DataItem * *hashArray;

//Creates a symbol table.
struct DataItem * * create() {
	static struct DataItem* newHashArray[SIZE] ;
	return newHashArray;
};

//Returns index of the entry for int key
int lookup(char *idName , int depth) {
	int hashIndex = 1;
	int isFind = 0;
	int first_index = 0;

	while (hashArray[hashIndex] != NULL) {
		if ( hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == tp_fun_index)
		{
			first_index = hashIndex;
			break;
		}
		else
		{
			++hashIndex;
		}
	}

	while (hashArray[hashIndex] != NULL) {
		if (strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == tp_fun_index && strcmp(hashArray[hashIndex]->type, "const") != 0)
		{
			isFind = 1;
			break;
		}
		else
		{
			++hashIndex;
		}
	}
	if (isFind == 1) {
		return hashIndex - first_index;
	}
	else {
		return -1;
	}
}

// search by relaxed condition
int lookup_nodepth(char *idName) {
	int hashIndex = 1;
	int isFind = 0;

	while (hashArray[hashIndex] != NULL) {
		if (strcmp(hashArray[hashIndex]->idName, idName) == 0 )
		{
			isFind = 1;
			break;
		}
		else
		{
			++hashIndex;
		}
	}
	if (isFind == 1) {
		return hashIndex;
	}
	else {
		return -1;
	}
}

// search for const
char* lookup_const(char *idName) {
	int hashIndex = 1;
	int isFind = 0;
	int depth = 0;

	while (hashArray[hashIndex] != NULL) {
			if (strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth && hashArray[hashIndex]->fun_index == tp_fun_index 
				&& strcmp(hashArray[hashIndex]->type, "const") == 0)
		{
			isFind = 1;
			break;
		}
		else
		{
			++hashIndex;
		}
	}
	if (isFind == 1) {
		return hashArray[hashIndex]->value;
	}
	else {
		return "";
	}
}

//Inserts s into  the symbol table
void insert(char *idName , char *type, char *value) {
	struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	strcpy(item->idName, idName);
	strcpy(item->type, type);
	strcpy(item->value, value);
	item->depth = itemDepth;
	item->fun_index = function_index;
	item->key = keyId;

	hashArray[keyId] = item;
	keyId ++;
}

//Dumps all entries of the symbol table. returns index of the entry.
void dump() {
	for (int i = 1; i < SIZE; i++)
	{
		if (hashArray[i] != NULL)
		{
			printf("%-*d:%-*s%-*s%-*s%-*d%-*d\n", 5, i, 15, hashArray[i]->idName, 15, hashArray[i]->type, 25, hashArray[i]->value, 15, hashArray[i]->fun_index, 5, hashArray[i]->depth);
		}
	}
	// clear the hashArray
	for (int i = 1; i < SIZE; i++)
	{
		if (hashArray[i] != NULL)
			{
		hashArray[i] = NULL;
		}
	}
}