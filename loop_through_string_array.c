#include <stdio.h>
/**
  *main - Loop through string Array
  *Return: 0
  */
int main(void)
{
	char greeting[] = "hello";

	for (int i = 0; i < 5; ++i)
	{
		printf("%c\n", greeting[i]);
	}
	return (0);
}
