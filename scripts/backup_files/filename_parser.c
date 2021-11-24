#include<stdio.h>

int main(int argc, char *argv[])
{
  char *filename = argv[1] + '\0';

  //fprintf(stdout, "filename: %s\n", filename[]);
  int i = 0;
  int index = 0;

  while(filename[i] != '\0')
  {
    //fprintf(stdout, "%c", filename[i]);
    if(filename[i] == '/')
    {
      index == i+1;
    }
    i++;
  }
  //fprintf(stdout, "index: %d\n", filename[5]);
  return 0;
}
