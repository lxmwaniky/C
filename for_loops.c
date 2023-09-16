#include <stdio.h>
/**
  *main - loops a given number of times
  *Return: 0
  */
int main(void)
{
	int end;

	printf("Enter stop value: ");
	scanf("%d", &end);
	for (int i = 0; i <= end; i++)
	{
		printf("%d. Hello Friend\n", i);
	}
	return (0);
}
