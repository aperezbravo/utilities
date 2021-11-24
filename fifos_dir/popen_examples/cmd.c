#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *in;
	extern FILE *popen();
	char buf[512];

	//if (!(in = popen("ls -sail", "r")))
	if (!(in = popen("ls -l", "r")))
		exit(1);

	while (fgets(buf, sizeof(buf), in) != NULL)
		printf("%s", buf);

	pclose(in);
}
