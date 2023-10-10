#include <stdio.h>
#include <math.h>
#include <unistd.h>

void basic_maths();
void complex_maths();
void trigonometry();

int main()
{
	int mode;

	puts("                          ........................CALCULATOR................................");
	puts("..................................................................................................................");
	sleep(1);
	putchar('\n');
	printf("1. Basic Maths\n2. Complex Maths\n");
	printf("Enter mode:  ");
	scanf("%d", &mode);
	while (1)
	{
		if (mode == 1)
		{
			sleep(0.5);
			basic_maths();
			break;
		}
		else if (mode == 2)
		{
			sleep(0.5);
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

	puts("                   ..........................Basic Maths....................");
	puts("...........................................................................................................................");
	sleep(0.5);
	putchar('\n');
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n");
	printf("Choose an Operator: ");
	scanf("%d", &operator);
	sleep(0.3);
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
				printf("Denominator must be less then numerator and not equal to zero\n");
			}
			break;
		default:
			printf("Invalid Operator\n");
			break;
	}
}

void complex_maths()
{
	int method, power;
	double num, result;

	puts("                       .....................Complex Maths..........................");
	puts("...................................................................................................");
	sleep(0.5);
	putchar('\n');
	printf("1. SquareRoot\n2. CubeRoot\n3. Square\n4. Cube\n5. Power\n6. Trigonometric Functions\n");
	printf("Choose a function: ");
	scanf("%d", &method);
	switch (method)
	{
		case 1:
			printf("Enter a number to SquareRoot: ");
			scanf("%lf", &num);
			result = sqrt(num);
			printf("The SquareRoot of %.2lf is %.2lf\n", num, result);
			break;
		case 2:
			printf("Enter a number to CubeRoot: ");
			scanf("%lf", &num);
			result = cbrt(num);
			printf("The CubeRoot of %.2lf is %.2lf\n", num, result);
			break;
		case 3:
			printf("Enter a number to Square: ");
			scanf("%lf", &num);
			result = num * num;
			printf("The Square of %.2lf is %.2lf\n", num, result);
			break;
		case 4:
			printf("Enter a number to Cube: ");
			scanf("%lf", &num);
			result = num * num * num;
			printf("The Cube of %.2lf is %.2lf\n", num, result);
			break;
		case 5:
			printf("Enter a number: ");
			scanf("%lf", &num);
			printf("Enter the power: ");
			scanf("%d", &power);
			result = pow(num, power);
			printf("%.2lf raised to the power of %d is %.2lf\n", num, power, result);
			break;
		case 6:
			trigonometry();
			break;
		default:
			printf("Invalid function\n");
			break;
	}
}

void trigonometry()
{
	int trigonom;
	double angle;

	puts("                  ................Tigonometric Functions..........................................");
	puts("..................................................................................................");
	sleep(0.5);
	printf("1. Sin\n2. Cos\n3. Tan\n");
	printf("Enter a trigonometric Function to use: ");
	scanf("%d", &trigonom);
	printf("Enter an angle: ");
	scanf("%lf", &angle);
	switch(trigonom)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			printf("Invalid Choice!");
			break;
	}

}
