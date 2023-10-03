#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* name = malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
	{
		name[i] = i;
		printf("%d ", name[i]);
	}
	printf("\n");
	return 0;
}
