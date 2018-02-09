#include <sys/types.h>
#include <sys/dir.h>
#include <sys/param.h>
#include <stdio.h>
#include <stdlib.h>

// List of functions 
int file_select();
extern int alphasort();
extern char *get_current_dir_name();

int main()
{
	int count,i;
	struct direct **files;
	char *pathname;
	int t = 1;
	
	// Get the string value for the current working directory and print it
	//getwd(pathname);
	pathname = get_current_dir_name();
	printf("PWD = %s\n",pathname);

	// Get the information for the files in the directory
	count = scandir(pathname, &files, file_select, alphasort);
	/* No files in Dir */
	if (count <= 0)
	{
		printf("No files in Dir\n");
		exit(0);
	}

	printf("Number of files = %d\n",count);
	for (i=1;i<count+1;++i)
	{
		printf("\n%s",files[i-1]->d_name);
	}
	printf("\n");

	// Free memory
	free(pathname);
	return 0;
}

int file_select(struct direct *entry)
{
	return (1);
}