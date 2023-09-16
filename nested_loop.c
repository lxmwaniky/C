#include <stdio.h>
/**
  *main - Nested Loops
  *Return: 0
  */
int main(void)
{
	int height, width;

	printf("Enter a height: ");
	scanf("%d", &height);
	printf("Enter a width: ");
	scanf("%d", &width);
	for (int x = 0; x < height; x++)
	{
		for (int y = 0; y < width; y++)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
