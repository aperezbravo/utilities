#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *pipe;

	pipe = popen("ls", "r");
	fputc('\n', pipe);
	//fprintf(pipe, "%s");
	return 0;
}
