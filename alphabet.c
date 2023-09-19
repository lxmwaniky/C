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
		for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
		{
			printf("%c %c\t", uppAlpha, lowAlpha);
		}
		putchar('\n');
	}
	return (0);
}
