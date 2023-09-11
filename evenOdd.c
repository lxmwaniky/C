#include <stdio.h>
/**
  *check - Calculates modulo
  *x: Modulo
  */

void check(int x)
{
	int modulo = x % 2;

	if (modulo == 0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
}
/**
  *main - This is the main program function
  *Return: 0
  */
int main(void)
{
	int x;

	printf("Enter a value: ");
	scanf("%d", &x);
	check(x);
	return (0);
}
