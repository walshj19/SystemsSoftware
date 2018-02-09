#include <stdio.h>
#include <stdlib.h>

extern int execv(const char *path, char *const argv[]);

int main ()
{
	char *argv[] = {"ls", "-l", NULL};
	execv("/bin/ls", argv);
	return 0;
}