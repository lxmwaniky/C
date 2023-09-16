#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a value: ");
	scanf("%d", &num);
	int cube = num * num * num;

	printf("The cube is %d.\n", cube);
	return (0);
}
