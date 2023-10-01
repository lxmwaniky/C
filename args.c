#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("The Argument count is: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("The Argument values are: %s\n", argv[i]);
	}
	return 0;
}
