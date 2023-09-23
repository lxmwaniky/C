#include <stdio.h>

int main()
{
	int x, y, result;
	char operator;

	printf("Enter a 1st number: ");
	scanf("%d", &x);
	printf("Enter a 2nd number: ");
	scanf("%d", &y);
	printf("Choose an Operator(+, *, /, -): ");
	scanf(" %c", &operator);
	switch(operator)
	{
		case '+':
			result = x + y;
			printf("%d %c %d = %d", x, operator, y, result);
			break;
		case '-':
			result = x - y;
			printf("%d %c %d = %d", x, operator, y, result);
			break;
		case '*':
			result = x * y;
			printf("%d %c %d = %d", x, operator, y, result);
			break;
		case '/':
			result = x / y;
			printf("%d %c %d = %d", x, operator, y, result);
			break;
		default:
			printf("Invalid Operator\n");
			break;
	}
	return 0;
}
