// C program to implement one side of FIFO 
// This side writes first, then reads 
#include <stdio.h> 
#include <string.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 

int main() 
{ 
	FILE *fd; 

	// FIFO file path 
	char * myfifo = "bash_in"; 

	// Creating the named file(FIFO) 
	// mkfifo(<pathname>, <permission>) 
	/*if( mkfifo(myfifo, 7777) )
	{
		fprintf(stdout, "error occured \n");
	}
	else 
	{
		fprintf(stdout, "named pipe file created successfully\n");
	}*/

	char arr1[80];
	char arr2[] = "Hello world\n";
	char buff[100];
	while (1) 
	{ 
		fgets(buff, 100, stdin);
		//fprintf(stdout, "%s", buff);
		// Open FIFO for write only 
		fd = fopen(myfifo, "w"); 
		//fputs
		//fprintf(stdout, "%s", arr2);
		fprintf(fd, "%s",buff);
		//fputs(arr2, fd); 

		// Take an input arr2ing from user. 
		// 80 is maximum length 
		//fgets(arr2, 80, stdin); 

		// Write the input arr2ing on FIFO 
		// and close it 
		//write(fd, arr2, strlen(arr2)+1); 
		//close(fd); 

		// Open FIFO for Read only 
		//fd = open(myfifo, O_RDONLY); 

		// Read from FIFO 
		//read(fd, arr1, sizeof(arr1)); 

		// Print the read message 
		//printf("User2: %s\n", arr1); 
		fclose(fd); 
	} 
	return 0; 
} 
