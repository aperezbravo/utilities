#include <stdio.h> 
#include <string.h> 
#include <fcntl.h> 
#include <sys/stat.h> 
#include <sys/types.h> 
#include <unistd.h> 

int main() 
{ 
	// FIFO file path 
	char * myfifo = "newfifo"; 
	FILE * fd;

	// Creating the named file(FIFO) 
	// mkfifo(<pathname>,<permission>) 
	//mkfifo(myfifo, 0666); 

	//char str1[80], str2[80]; 
	char arr2[100];
	char buff[10];

	//fgets(buff, 10, stdin);
	//fprintf(stdout, "%s\n", buff);

	//while (1) 
	{ 
		// First open in read only and read 
		fd = fopen(myfifo,"r"); 
		fread(arr2, 90, 1,fd); 
		
		//fprintf(stdout, "%s\n", buff);
		
		//parse piped content and determine if it is a command or simply text
		//int i; 
		//for(i = 0; i < 90; i++)
		{
			//buff[i] = arr2[i];
			//if(arr2[i] == " ")
			{
				//fprintf(stdout, "there is a space and the string is: %s\n", buff);	
				//break;
			}	
		}
		//fprintf(stdout, "%s\n", buff);
		
		
		
		fprintf(stdout, "%s", arr2);

		// Print the read string and close 
		//printf("User1: %s\n", str1); 
		//close(fd1); 

		// Now open in write mode and write 
		// string taken from user. 
		//fd1 = open(myfifo,O_WRONLY); 
		//fgets(str2, 80, stdin); 
		//write(fd1, str2, strlen(str2)+1); 
		fclose(fd); 
	} 
	return 0; 
} 
