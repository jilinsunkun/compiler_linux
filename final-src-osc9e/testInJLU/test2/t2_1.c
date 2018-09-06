#include <math.h>
#include <sched.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
typedef struct     //实时任务描述
{char task_id;int call_num;    
    int ci;int ti; int di;
    int ci_left;int ti_left;int di_left;
    int flag; int arg; pthread_t th; } task;
void proc(int *args);//被选中任务执行//
void * idle();//没有可执行任务时执行//
int select_proc();//实现调度算法//
int task_num=0;int idle_num=0;
int curr_proc=-1;
int alg;//所选算法，1为EDF,2为RMS
int demo_time=100;//演示时间//

	int curr_time=0;
task *tasks;
pthread_mutex_t proc_wait[100];
pthread_mutex_t main_wait,idle_wait;
float sum=0;
pthread_t idle_proc;
int main(int argc, char **argv)
{
    pthread_mutex_init (&main_wait,NULL);
    pthread_mutex_lock (&main_wait);    
    pthread_mutex_init (&idle_wait,NULL);
    pthread_mutex_lock (&idle_wait);    //下次执行lock等待
    printf("请输入算法： [1]EDF，[2]RMS：");
    scanf("%d",&alg);
    printf("请输入实时任务数量：");
    scanf("%d",&task_num);
    tasks=(task*)malloc(task_num*sizeof(task));
    int i;
for(i=0;i<task_num;i++){pthread_mutex_init (&proc_wait[i],NULL);
        pthread_mutex_lock (&proc_wait[i]); }if(alg==1){
for(i=0; i<task_num; i++){printf("请输入任务ID，Ci，Ti, Di：");
scanf("\n%c,%d,%d,%d",&tasks[i].task_id,&tasks[i].ci,&tasks[i].ti,&tasks[i].di);       printf("ID=%c,Ci=%d,Ti=%d,Di=%d\n",tasks[i].task_id,tasks[i].ci,tasks[i].ti,tasks[i].di);tasks[i].ci_left=tasks[i].ci;tasks[i].ti_left=tasks[i].ti;
            tasks[i].di_left=tasks[i].di;
            tasks[i].flag=2;
            tasks[i].arg=i;
            tasks[i].call_num=1;          sum=sum+(float)tasks[i].ci/(float)tasks[i].ti;}}else{for(i=0; i<task_num; i++){printf("请输入任务ID，Ci，Ti：");scanf("\n%c,%d,%d",&tasks[i].task_id,&tasks[i].ci,&tasks[i].ti);
            tasks[i].ci_left=tasks[i].ci;
            tasks[i].ti_left=tasks[i].ti;
            tasks[i].flag=2;
            tasks[i].arg=i;
            tasks[i].call_num=1;
            sum=sum+(float)tasks[i].ci/(float)tasks[i].ti;}}
    printf("请输入演示时间：");
    scanf("%d",&demo_time);
    double r=1;  //EDF算法
    if(alg==2){
  r=((double)task_num)*(exp(log(2)/(double)task_num)-1);printf("r is %lf\n",r);  }if(sum>r){  printf("(sum=%lf > r=%lf) ,无法调度！\n",sum,r);
        exit(2);}
    pthread_create(&idle_proc,NULL,(void*)idle,NULL); //创建闲逛线程
    for(i=0; i<task_num; i++) //创建实时任务线程
pthread_create(&tasks[i].th,NULL,(void*)proc,&tasks[i].arg);
    for(i=0; i<demo_time; i++){int j;
        if((curr_proc=select_proc(alg))!=-1){
           // 按调度算法选线程
            pthread_mutex_unlock(&proc_wait[curr_proc]);            
            pthread_mutex_lock(&main_wait);  //主线程等待
        }
        else
        {//无可运行任务，选择闲逛线程
        	pthread_mutex_unlock(&idle_wait);
            
            pthread_mutex_lock(&main_wait);
        }
        for(j=0; j<task_num; j++)
        {
        if(alg==1)tasks[j].di_left--;//Ti--，为0时开始下一周期
        if(--tasks[j].ti_left==0){
      	tasks[j].ti_left=tasks[j].ti;tasks[j].ci_left=tasks[j].ci;
            if(alg==1)tasks[j].di_left=tasks[j].di;
    			pthread_create(&tasks[j].th,NULL,(void*)proc,&tasks[j].arg);
                tasks[j].flag=2;
            } 
        }
    }
    printf("\n");
    sleep(2);
};
void proc(int* args){
    while(tasks[*args].ci_left>0){
        pthread_mutex_lock(&proc_wait[*args]);  //等待被调度
        if(idle_num!=0){
            printf("idle(%d)",idle_num,curr_time);
            idle_num=0;
        }
  printf("%c%d",tasks[*args].task_id,tasks[*args].call_num);
        tasks[*args].ci_left--;  //执行一个时间单位
        curr_time++;
        if(tasks[*args].ci_left==0){
            printf("(%d,%d)",tasks[*args].ci,curr_time);
            tasks[*args].flag=0;
            tasks[*args].call_num++;}
        pthread_mutex_unlock(&main_wait); //唤醒主线程
    }
};
void* idle()
{
	while(1){
        pthread_mutex_lock(&idle_wait);  //等待被调度
        printf("->");  //空耗一个时间单位
        idle_num++;
        curr_time++;
        pthread_mutex_unlock(&main_wait);  //唤醒主控线程}
	}
};
int select_proc(int alg)
	{
	    int j;
	    int temp1=10000,temp2=-1;
	    temp1=10000;
	    temp2=-1;
	    if((alg==2)&&(curr_proc!=-1)&&(tasks[curr_proc].flag!=0))
	        return curr_proc;  //非抢先调度
	    for(j=0; j<task_num; j++)
	    {
        if(tasks[j].flag==2) {
            switch(alg) {
            case 1:    //EDF算法
                if(temp1>tasks[j].di_left){
                    temp1=tasks[j].di_left;
                    temp2=j;
                }
            case 2:    //RMS算法
                if(temp1>tasks[j].ti){
                    temp1=tasks[j].ti;
                    temp2=j;}
                }
            }
        }
	         return temp2;
    }
	   
