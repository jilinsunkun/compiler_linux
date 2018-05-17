
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int num = 0;
char *itoa(int num,char *str,int radix);

void insert(char* token);
typedef struct _node{
    char *name;
    char *desc;
    struct _node *next;
}node;

#define HASHSIZE 101
static node* hashtab[HASHSIZE];

void inithashtab(){
    int i;
    for(i=0;i<HASHSIZE;i++)
        hashtab[i]=NULL;
}

unsigned int hash(char *s){
    unsigned int h=0;
    for(;*s;s++)
        h=*s+h*31;
    return h%HASHSIZE;
}

node* lookup(char *n){
    unsigned int hi=hash(n);
    node* np=hashtab[hi];
    for(;np!=NULL;np=np->next){
        if(!strcmp(np->name,n))
            return np;
    }

    return NULL;
}

char* m_strdup(char *o){
    int l=strlen(o)+1;
    char *ns=(char*)malloc(l*sizeof(char));
    strcpy(ns,o);
    if(ns==NULL)
        return NULL;
    else
        return ns;
}

char* get(char* name){
    node* n=lookup(name);
    if(n==NULL)
        return NULL;
    else
        return n->desc;
}

int install(char* name,char* desc){
    unsigned int hi;
    node* np;
    if((np=lookup(name))==NULL){
        hi=hash(name);
        np=(node*)malloc(sizeof(node));
        if(np==NULL)
            return 0;
        np->name=m_strdup(name);
        if(np->name==NULL) return 0;
        np->next=hashtab[hi];
        hashtab[hi]=np;
    }
    else
        free(np->desc);
    np->desc=m_strdup(desc);
    if(np->desc==NULL) return 0;

    return 1;
}

/* A pretty useless but good debugging function,
which simply displays the hashtable in (key.value) pairs
*/
void displaytable(){
    int i;
    node *t;
    for(i=0;i<HASHSIZE;i++){
        if(hashtab[i]==NULL)
            printf("()");
        else{
            t=hashtab[i];
            printf("(");
            for(;t!=NULL;t=t->next)
                printf("(%s.%s) ",t->name,t->desc);
            printf(".)");
        }
    }
}

void cleanup(){
    int i;
    node *np,*t;
    for(i=0;i<HASHSIZE;i++){
        if(hashtab[i]!=NULL){
            np=hashtab[i];
            while(np!=NULL){
                t=np->next;
                free(np->name);
                free(np->desc);
                free(np);
                np=t;
            }
        }
    }
}

char *itoa(int num,char *str,int radix){//num：int型原数,str:需转换成的string，radix,原进制， 
     
    /* 索引表 */
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned unum;/* 中间变量 */
    int i=0,j,k;
     
    /* 确定unum的值 */
    if(radix==10&&num<0){/* 十进制负数 */
        unum=(unsigned)-num;
        str[i++]='-';
    }else
        unum=(unsigned)num;/* 其他情况 */
    /* 逆序 */
    do{
        str[i++]=index[unum%(unsigned)radix];
        unum/=radix;
    }while(unum);
 
    str[i]='\0';
    /* 转换 */
    if(str[0]=='-')
        k=1;/* 十进制负数 */
    else
        k=0;
    /* 将原来的“/2”改为“/2.0”，保证当num在16~255之间，radix等于16时，也能得到正确结果 */
    for(j=k;j<(i-1)/2.0+k;j++){
        num=str[j];
        str[j]=str[i-j-1+k];
        str[i-j-1+k]=num;
    }
    return str;
}
void insert(char* token)
{
	char buf[32];
	install(token, itoa(num, buf, 10));
	num++;
}

/*
main(){
    int i;
    char* names[]={"name","address","phone","k101","k110"};
    char* descs[]={"Sourav","Sinagor","26300788","Value1","Value2"};

    inithashtab();
    for(i=0;i<5;i++)
        install(names[i],descs[i]);

    printf("Done");
    printf("If we didnt do anything wrong..""we should see %s",get("k110"));

    install("phone","9433120451");

    printf("Again if we go right, we have %s and %s",get("k101"),get("phone"));
    cleanup();
    return 0;
}*/
