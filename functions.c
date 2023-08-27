#include <stdio.h>

void numSquare(int num){
	int square = num * num;
	printf("The square of %d is %d\n", num, square);
}

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	numSquare(num);
	return 0;
}
