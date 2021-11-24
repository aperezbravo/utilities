#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include <time.h>

int main()
{
	time_t t;
	char nam[100];
	pid_t pid = fork();

	if( pid == 0)
	{
		int count = 1;
		printf("hello from child\n");
		while(1)
		{
			time(&t);
			FILE *fp = NULL;
			fp = fopen("/home/pi/daemon_logs/log.txt", "a");
			fprintf(fp, "%s", "Hello from the background \n");
			fprintf(fp, "%s", ctime(&t));
			fclose(fp);
			sleep(60);
			count++;
		}
	}
	else
	{
		printf("hello from parent here is child pid: %d\n", pid);
		exit(0);
	}
	return 0;
}
