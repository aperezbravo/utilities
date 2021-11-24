#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
//used to log error messages
#include <errno.h>

int main()
{
	//file descriptor
	int fd;
	char * fifo_file = "h.txt";
	//char buff[20] = "hello world";
	char buff[20]; 
	int read_bytes = 0;

	//check if we can properly get a file descriptor to modify the named pipe file 
	if( fd = open(fifo_file, O_RDWR) < 0)
	{
		fprintf(stdout, "error closing program.\n");
		//fprintf(stdout, "%d\n", fd);
		printf("%d\n", errno);
		close(fd);
		exit(1);
	}
	else
	{
		fprintf(stdout, "reading buffer ...\n");
		read(fd, buff, 20); 
		//fprintf(stdout, "%d bytes read ...\n");
		//fprintf(stdout, "buffer read ...\n");
		fprintf(stdout, "%s\n", buff);
		//close(fd);
	}

	return 0;
}
