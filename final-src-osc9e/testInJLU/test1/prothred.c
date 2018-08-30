#include <sys/types.h>
#include <sys/file.h>
#include "unisted.h"
char r_buf[4];
char w_buf[4];
int pipe_fd[2];

pid_t pid1,pid2,pid3,pid4;

int producer(int id);
int consumer(int id);

int main(int argc,char **argc)
{
	if(pipe(pipe_fd)<0)
	{
		printf("pip creat error\n");
		exit(-1);

	}
	else {
		printf("pip succssfully\n");
		if (pid1=fork()==0)
		{
			producer(1);
			/* code */
		}
		if(pid2=fork()==0)
		{
			producer(2);
		}
		if(pid3=fork()==0)
		{
			consumer(1);
		}
		if (pid4=fork()==0)
		{
			consumer(2);
			/* code */
		}
		close(pipe_fd[0]);
		close(pipe_fd[1]);
		int i,pid,status;
		for(i=0;i<4;i++)
			pip=wait(&status);
		exit(0);
	}
}
int producer(int id)
{
	printf("producer %d is running \n",id );
}