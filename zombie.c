#include<stdio.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
	pid_t id;
	id=fork();
	if(id==0)
	{
		//Child
		printf("Child Started\n");
		sleep(2);
		printf("Child Existing\n");
	}
	else
	{
		//parent
		printf("Parent starting\n");
		sleep(10);
		printf("Parent Existing\n");
	}
	return 0;
}


