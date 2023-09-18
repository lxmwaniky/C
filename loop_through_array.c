#include <stdio.h>
/**
  *main - Loops through an array
  *Return: 0
  */
int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return (0);
}
