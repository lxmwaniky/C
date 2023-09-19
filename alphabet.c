#include <stdio.h>
/**
  *main - prints Alphabet
  *Return: 0
  */
int main(void)
{
	char uppAlpha, lowAlpha;

	for (uppAlpha = 'A'; uppAlpha <= 'Z'; uppAlpha++)
	{
		printf("%c ", uppAlpha);
	}
	printf("\n");
	for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
	{
		printf("%c ", lowAlpha);
	}
	return (0);
}
