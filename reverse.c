#include <stdio.h>
/**
  *main - reverses string
  *Return: 0
  */
int main(void)
{
	char name[] = "Shazam";

	for (int i = 6; i >= 0; i--)
	{
		printf("%c", name[i]);
	}
	printf("\n");
	return (0);
}
