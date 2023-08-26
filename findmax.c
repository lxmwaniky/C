#include <stdio.h>

int findMax(int x, int y){
	return (x > y) ? x : y;
}
int main(){
	int x;
	int y;
	printf("Enter a 1st number: ");
	scanf("%d", &x);
	printf("Enter a 2nd number: ");
	scanf("%d", &y);
	int max = findMax(x, y);
	printf("%d",max); 
	return 0;
}
