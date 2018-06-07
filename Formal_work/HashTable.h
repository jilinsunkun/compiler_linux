#include <stdio.h>
int  yylex  (void);
void  yyerror  (const char *str);


int isShouldAdd = 0;
int keyId = 1;
int depth = 0;


char jasm[10000];
char temp_parameter[1000];
char unary_symbol[20];
int now_fun_index = 0;
int function_index = 0;
int temp_fun_index = 0;
int is_print = 0;
int is_assigning = 0;

#define SIZE 1024
#define MAX_LINE_LENG 1024

struct DataItem {
   char idName[100];
   char type[100];
   char value[100];
   int key;
   int depth;
};

struct DataItem* *hashArray;

//Creates a symbol table.
struct DataItem* * create(){
  static struct DataItem* newHashArray[SIZE] ;
  return newHashArray;
};
//Returns index of the entry for int key
int lookup(char *idName , int depth) {
   int hashIndex = 1;
   int isFind = 0;
   while(hashArray[hashIndex] != NULL) {
      if(strcmp(hashArray[hashIndex]->idName, idName) == 0 && hashArray[hashIndex]->depth == depth)
      {
        isFind = 1;
        break;
      }
      else
      {
        ++hashIndex;
      }
   }
   if(isFind == 1){
     return hashIndex;
   }
   else{
     return -1;
   }
}
//Inserts s into  the symbol table
<<<<<<< HEAD
void insert(char *idName , char *type, char *value,char *ty) {

=======
void insert(char *idName , char *type, char *value,char *type) {
>>>>>>> parent of d5173f6... befor to work
     struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
     strcpy(item->idName, idName);
     strcpy(item->type, type);
    strcpy(item->value, value);
    item->depth = depth;
      item->key = keyId;

    hashArray[keyId] = item;
    keyId ++;
}

void clear(){
   for(int i = 1;i < SIZE;i++)
   {
    if(hashArray[i] != NULL)
      {
          hashArray[i] = NULL;
      }
  }
}

//Dumps all entries of the symbol table. returns index of the entry.
void dump() {
   for(int i = 1;i < SIZE;i++)
   {
    if(hashArray[i] != NULL)
      {
<<<<<<< HEAD
        printf("%-*d:%-*s%-*s%-*s%-*d%-*s\n", 5, i, 20, hashArray[i]->idName, 15, hashArray[i]->type, 15, hashArray[i]->value, 5, hashArray[i]->depth,10,hashArray[i]->ty);

=======
        printf("%-*d:%-*s%-*s%-*s%-*d%-*s\n", 5, i, 20, hashArray[i]->idName, 15, hashArray[i]->type, 30, hashArray[i]->value, 5, hashArray[i]->depth,5,hashArray[i]->type);
>>>>>>> parent of d5173f6... befor to work
      }
  }
  clear();
}
