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
		printf("please input algorithm 1 for EDF 2 for RMS:\n");
		getchar();
		scanf("%d",&alg);
		printf("please inpiut the demo time:\n");
		scanf("%d",&demo_time);
		double r=1;
		if(alg==2){
			/*RMS*/
			r=((double)task_num)*(exp(log(2)/(double)task_num)-1);
			printf("r is %1f\n", );
		}
		if(sum>r){
			printf("sum=%1f>r=%1f,not schedulable!\n",sum_r );
			exit(2)
		}
		pthread_creat(&idle_proc,NULL,(void*)idle,NULL);
		for (int i = 0; i < task_num; ++i)
		{
			pthread_creat(&task[i].th,NULL,(void *)proc,&task[i].arg);
			/* code */
		}
		for (int i = 0; i < demo_time; ++i)
		{
			int j;
			if ((curr_proc=select_proc(alg))!=-1)
			{
				pthread_mutex_unlock(&proc_wait[curr_proc]);
				pthread_mutex_lock(&main_wait);
				/* code */
			}
			else{
				pthread_mutex_unlock(idle_wait);
				pthread_mutex_lock(&main_wait);
			}
			for (int i = 0; i < task_num; ++i)
			{
				if(--tasks[j].ti_left==0){
					tasks[j].ti_left=tasks[j].ti;
					tasks[j].ci_left=tasks[j].ci;
					pthread_creat(&tasks[j].th,NULL,(void *)proc,&tasks[j].arg);
					tasks[j].flag=2;
				}
				/* code */
			}

			/* code */
		}
		printf("\n");
		sleep(10);
		/* code */
	}
	/* code */
	return 0;
}
