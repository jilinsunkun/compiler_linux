#include <stdio.h>


#define SIZE  1024

int check = 0;
int keyId = 1;
int itemDepth = 0;
struct symbol_table {
  char  id[100];
  char  type[100];
  char  value[100];
  int Skey;
  int depth;
};
struct symbol_table* *hash_table;

struct symbol_table* * create()
  {
    static struct symbol_table* newhash_table[SIZE];
    return(newhash_table);
  };

int lookup( char *id, int depth)
  {
    int hash_index  = 1;
    int find    = 0;

    while ( hash_table[hash_index] != NULL )
    {
      if ( strcmp( hash_table[hash_index]->id, id ) == 0 && hash_table[hash_index]->depth == depth )
      {
        find = 1;
        break;
      }else  {
        ++hash_index;
      }
    }
    if ( find == 1 )
    {
      return(hash_index);
    }else  {
      return(-1);
    }
  }

void insert( char *id, char *type, char *value )
  {
    struct symbol_table *item = (struct symbol_table *) malloc( sizeof(struct symbol_table) );
    strcpy( item->id, id );
    strcpy( item->type, type );
    strcpy( item->value, value );
    item->depth = itemDepth;
    item->Skey = keyId;

    hash_table[keyId] = item;
    keyId++;
  }

  void clear()
  {
    for ( int i = 1; i < SIZE; i++ )
    {
      if ( hash_table[i] != NULL )
      {
        hash_table[i] = NULL;
      }
    }
  }

void dump()
  {
    for ( int i = 1; i < SIZE; i++ )
    {
      if ( hash_table[i] != NULL )
      {
        printf( "%d:%-*s%-*s%-*s%-*d\n", i, 10, hash_table[i]->id, 10, hash_table[i]->type, 10, hash_table[i]->value, 10,hash_table[i]->depth);
      }
    }
    clear();
  }
