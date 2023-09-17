#include <stdio.h>
/**
  *main - Gets string input
  *Return: 0
  */
int main(void)
{
	char name[25];

	printf("Enter your name: ");
	scanf("%s", name);
	printf("Hello %s\n", name);
	return (0);
}
