#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netdb.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  //char *file_name[10];
  char file_name[] = "h.txt";
  int fd_status = open(file_name, O_RDONLY);
  if(fd_status == -1)
  {
    fprintf(stderr, "CLIENT ERR: %s\n", gai_strerror(fd_status));
    exit(1);
  }
  return 0;
}
