#include <stdio.h>
/**
  *main - Long length inputs without buffer overflow
  *Return: 0
  */
int main(void)
{
	char name[25];

	printf("Enter your name: ");
	fgets(name, 25, stdin);
	printf("Hello %s", name);
	return (0);
}
