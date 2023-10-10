#include <stdio.h>

int main()
{
	double area, radius;
	double pi = 3.14159;
	
	printf("Enter a Radius to calculate: ");
	scanf("%lf", &radius);
	area = pi * radius * radius;
	printf("The area of a circle radius %.2lf is %.2lf\n", radius, area);
	return 0;
}
