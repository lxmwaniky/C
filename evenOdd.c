#include <stdio.h>

void check(int x){
	int modulo = x % 2;
	if (modulo == 0){
		printf("Even");
	}
	else{
		printf("Odd");
	}
}
int main(){
	int x;
	printf("Enter a value: ");
	scanf("%d", &x);
	check(x);
	return 0;
}
