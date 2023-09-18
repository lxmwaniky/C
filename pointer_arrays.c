#include <stdio.h>
/**
  *main - Pointers and arrays
  *Return: 0
  */
int main(void)
{
	int arr[] = {1, 3, 5, 7, 9};

	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", *(arr + i));
	}
	return (0);
}
