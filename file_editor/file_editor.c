#include<stdio.h>

int main()
{
  FILE *fp = NULL;

  fp = fopen("test_file.txt", "w+");
  //fprintf("Hello world\n", fp);
  fprintf(fp, "hello world\n");
  fclose(fp);
  return 0;
}
