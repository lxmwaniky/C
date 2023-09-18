#include <stdio.h>
/**
  *main - Get value of Variable pointer points to
  *Return: 0
  */
int main(void)
{
	int age = 18;
	int *pAge = &age; /*Stores memory address of var age*/

	printf("Value of age - %d\n", age);
	printf("Memory Address of age - %p\n", &age);
	printf("Memory Address of age with Pointer - %p\n", pAge);
	printf("Value from Memory Address - %d\n", *pAge);
	return (0);
}
