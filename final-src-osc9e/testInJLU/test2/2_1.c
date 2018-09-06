#include <math.h>
#include <sched.h>
#include <pthread.h>
#include<stdlib.h>
#include <semaphore.h>
#include <stdio.h>
 
typedef struct{
	char task_id;
	int call_num;
	int ci;
	int ti;
	int ci_left;
	int ti_left;
	int flag;
	int arg;
	pthread_t th;
}task;

void proc(int* args);
void* idle();
int select_proc();

int task_num=0;
int idle_num=0;

int alg //1 is EDF and 2 is RMS
int curr_proc=-1;
int demo_time=100;

task* task;
pthread_mutex_t proc_wait[100];
pthread_mutex_t main_wait,idle_wait;
float num=0;
pthread_t idle_proc;

int main(int argc, char **argv)
{
	pthread_mutex_init(&main_wait,NULL);
	pthread_mutex_lock(&main_wait);
	pthread_mutex_init(idle_wait,NULL);
	pthread_mutex_lock(&idle_wait);
	printf("please input number of real time tasks:\n");
	scanf("%d",&task_num);
	tasks=(task *)malloc(task_num* sizeof(task));
	for (int i = 0; i < task_num; ++i)
	{
		pthread_mutex_init(&proc_wait[i],NULL);
		pthread_mutex_lock(&proc_wait[i]);
		/* code */
	}
	for (int i = 0; i < task_num; ++i)
	{
		printf("please input task id,folled by CI and TI:\n");
		getchar();
		scanf("%c,%d,%d,"&tasks[i].task_id,&tasks[i].ci,&tasks[i].ti);
		tasks[i].ci_left=tasks[i].ci;
		tasks[i].ti_left=tasks[i].ti;
		tasks[i].flag=2;
		tasks[i].arg=i;
		tasks[i].call_num=1;
		sum=sum+(float)tasks[i].ci/(float)tasks[i].ti;
		/* code */
	}
	/* code */
	return 0;
}
