#include <stdio.h>
/**
  *main - do while loops
  *Return: 0
  */
int main(void)
{
	int x = 0;

	do {
		printf("%d. Hello\n", x);
		x++;
	} while (x < 10);
	return (0);
}
