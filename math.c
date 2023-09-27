#include <stdio.h>

void basic_maths();
void complex_maths();

int main()
{
	int mode;

	puts("........................CALCULATOR................................");
	puts("..................................................................");
	putchar('\n');
	printf("1. Basic Maths\n2. Complex Maths\n");
	printf("Enter mode:  ");
	scanf("%d", &mode);
	while (1)
	{
		if (mode == 1)
		{
			basic_maths();
			break;
		}
		else if (mode == 2)
		{
			complex_maths();
			break;
		}
		else
		{
			printf("Enter a Valid mode: ");
			scanf("%d", &mode);
		}
	}


	return 0;
}

void basic_maths()
{
	int operator;
	double x, y;

	puts(".........Basic Maths.........");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
	printf("Choose an Operator: ");
	scanf("%d", &operator);
	printf("Enter 1st Value: ");
	scanf("%lf", &x);
	printf("Enter 2nd Value: ");
	scanf("%lf", &y);
	switch (operator)
	{
		case 1:
			printf("The sum of %.2lf and %.2lf is %.2lf\n", x, y, x + y);
			break;
		case 2:
			printf("The Difference of %.2lf and %.2lf is %.2lf\n", x, y, x - y);
			break;
		case 3:
			printf("The Product of %.2lf and %.2lf is %.2lf\n", x, y, x * y);
			break;
		case 4:
			if (y != 0)
			{
				printf("The Quotient of %.2lf and %.2lf is %.2lf\n", x, y, x / y);
			}
			else
			{
				printf("You can't divide by zero\n");
			}
			break;
		case 5:
			if (y != 0 && x > y)
			{
				printf("The modulo of %.2lf and %.2lf is %d\n", x, y, (int)x % (int)y);
			}
			else
			{
				printf("Math Error\n");
			}
			break;
		default:
			printf("Invalid Operator\n");
			break;
	}
}

void complex_maths()
{
	printf("You selected Complex Maths\n");
}
