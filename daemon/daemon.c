//#include <stdio.h>
//#include <sys/types.h>
//#include <unistd.h>
//#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

int main() 
{
	time_t t;
	time(&t);
	int p_id, p_pid;
	pid_t pid = fork();
	p_id = getpid();
	//p_pid = getpid();
	//printf("%d\n", n);
	//printf("Process ID: %d\n",p_id);
	//printf("Parent Process ID: %d\n",p_pid);
	//printf("Hello World!\n");
	printf("%s\n", ctime(%t)); 
	int p = 0;
	if(pid == 0)
	{
		//p = getpid();
		printf("Hello from Child!\n");
		printf("Process ID: %d\n",p_id);
		while(1);
		{
			sleep(10);
		}
		//sleep(10);
	} 
	else 
	{
		//p = getpid();
		printf("Hello from Parent!\n");	
		printf("Process ID: %d\n",p_id);
		//sleep(10);
		exit(0);
		//return 0;
	}
	return 0;
}
