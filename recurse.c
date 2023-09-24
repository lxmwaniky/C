#include <stdio.h>

int sum(int n);

int main()
{
	int num, result;

	printf("Enter a Value: ");
	scanf("%d", &num);
	result = sum(num);
	printf("%d", result);
	return 0;
}

int sum(int n)
{
	if (n > 0)
	{
		return n + sum(n - 1);
	}
	else
	{
		return 0;
	}
}
