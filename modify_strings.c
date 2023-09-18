#include <stdio.h>
/**
  *main - Modifys a string
  *Return: 0
  */
int main(void)
{
	char progress[] = "Zero";

	printf("%s\n", progress);
	progress[0] = 'H';

	printf("%s\n", progress);
	return (0);
}
