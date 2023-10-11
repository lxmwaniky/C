#include <stdio.h>

int main()
{
	int n = 50;
	int *p = &n;
	printf("%p\n", &n);
	return 0;
}