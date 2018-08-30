#include <sched.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>

int producter(void *args);
int consumer(void *args);
pthread_mutex_t mutex;
sem_t product;
sem_t warehouse;

char buffer[8][4];
int bp = 0;

main(int argc, char **argv)
{
	pthread_mutex_init(&mutex,NULL);
	sem_init(&product,0,0);
	sem_init(&warehouse,0,8);
	int clone_flag,arg,retval;
	char *stack;
	clone_flag=CLONE_VM|CLONE_SIGHAND|CLONE_FS|CLONE_FILES;
	int i;
	for (int i = 0; i < 2; ++i)
	{
		arg=i;
		stack=(char*)malloc(4069);
		retval=clone((void *)product,&(stack[4095]),clone_flag,(void *)&arg);
		stack=(char *)malloc(4096);
		retval=clone((void *)consumer,&(stack[4095]),clone_flag,(void *)&arg);
		sleep(1);

		/* code */
	}
	exit(1);
}
int producter(void *args)
{
	int id =*((int*)args);
	int i;
	for (int i = 0; i < 10; ++i)
	{
		sleep(i+1);
		sem_wait(&warehouse);
		pthread_mutex_lock(&mutex);
		/* code */
	}
}