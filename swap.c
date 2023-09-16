#include <stdio.h>

int main(void)
{
	int x;
	int y;
	
	printf("enter a value for x: ");
	scanf("%d", &x);
	printf("enter a value for y: ");
	scanf("%d", &y);
	int i = x;
	int j = y;
	
	y = i;
	x = j;
	
	printf("x: %d\ny: %d\n", x, y);
	
	return 0;
}
