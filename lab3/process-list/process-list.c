#include <stdio.h>
#include <stdlib.h>

extern int execv(const char *path, char *const argv[]);

int main (int argc, char **argv)
{
	// If there is only one arg exec ps
	if (argc == 1)
	{
		char *args[] = {"ps", "-e", NULL};
		execv("/bin/ps", args);
	}

	
	return 0;
}