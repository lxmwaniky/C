#include <stdio.h>
/**
  *main - 2D Arrays
  *Return: 0
  */
int main(void)
{
	int multArr[2][3] = {{1, 3, 5}, {2, 4, 6}};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", multArr[i][j]);
		}
	}
	return (0);
}
