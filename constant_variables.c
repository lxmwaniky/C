#include <stdio.h>
/**
  *main - Let's maintain our variables
  *Return: 0
  */
int main(void)
{
	const int age = 17;

	printf("Last year I was %d years old\n", age);
	age = 18;
	printf("This year I am %d years old\n", age);
	age = 19;
	printf("Next year I will be %d years old\n", age);
	return (0);
}
