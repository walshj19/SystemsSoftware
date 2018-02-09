#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>



extern int execv(const char *path, char *const argv[]);

void make_entry(char *entry)
{
	FILE *fptr;
	fptr = fopen("log.txt", "a");

	// check that the file opened
	if (fptr == NULL)
	{
		printf("%s\n", "Error opening file!");
		exit(1);
	}

	fprintf(fptr, "%s\n", entry);
}

void sig_handler(int sigNum)
{
	if (sigNum == 10)
	{
		make_entry("New log entry");
	}
}

int main ()
{
	// Register the interrupt handler
	if (signal(10, sig_handler) == SIG_ERR)
	{
		printf("%s\n", "Signal error!");
	}

	// Create the child process
	pid_t pid = fork();
	if (pid == 0)
	{
		// child process
		make_entry("Log entry");

		sleep(20);

		//fclose(fptr);
	}
	else
	{
		// parent process
		printf("%s\n", "This is the parent process");

		// signal the child process to print to the log
		kill(pid, 10);
	}
	
	return 0;
}