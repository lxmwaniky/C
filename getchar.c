#include <stdio.h>
/**
  *main - Asks for character input
  *Return: 0
  */
int main(void)
{
	int ch;

	printf("Enter a character: ");
	ch = getchar();
	printf("You entered %c\n", ch);
	return (0);
}
