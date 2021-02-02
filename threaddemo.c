#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *thread(void *arg)
{
	//this function is acting as thread
	
	printf("Thread ******\n");
}

int main(int argc, char const *argv[])
{
	pthread_t tid;
	printf("before thread creation\n");
	pthread_create(&tid,NULL,thread,NULL);
	printf("after thread creation:\n");
	sleep(1); //delay for run
	printf("after sleep\n");

	return 0;
}

