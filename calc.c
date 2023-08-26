#include <stdio.h>

int main(){
	int x;
	int y;
	int result;
	int operator;
	printf("Enter the First number: ");
	scanf("%d", &x);
	printf("Enter the Second number: ");
	scanf("%d", &y);
	printf("Select an operation\n1. Addition\n2. Subtraction\n3. Multipilcation\n4. Division\nEnter your Choice: ");
	scanf("%d", &operator);
	switch(operator){
		case 1:
			result = x + y;
			printf("Result is: %d\n", result);
			break;
		case 2:
			result = x - y;
			printf("Result is: %d\n", result);
			break;
		case 3:
			result = x * y;
			printf("Result is: %d\n", result);
			break;
		case 4:
			result = x / y;
			printf("Result is: %d\n", result);
			break;
		default:
			printf("Invalid operator\n");
			break;
	}
	return 0;
}
	
