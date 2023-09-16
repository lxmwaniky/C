#include <stdio.h>
/**
  *main - Accepts specified format input
  *Return: 0
  */
int main(void)
{
	int age;

	printf("How old are you: ");
	scanf("%d", &age);
	printf("You are %d years old.", age);
	return (0);
}
