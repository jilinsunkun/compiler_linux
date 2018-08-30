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
	sem_init(&warehouse,0,8)
}