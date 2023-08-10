#include <stdio.h>
#include <math.h>

int main(){
    char operator;
    float num1, num2, total;
    printf("Enter an operator(+ - * /): ");
    scanf("%c", &operator);
    printf("Num1: ");
    scanf("%f", &num1);
    printf("Num2: ");
    scanf("%f", &num2);
    switch(operator){
        case('+'):
            total = num1 + num2;
            printf("Answer: %.2f", total);
            break;
        case('-'):
            total = num1 - num2;
            printf("Answer: %.2f", total);
            break;
        case('*'):
            total = num1 * num2;
            printf("Answer: %.2f", total);
            break;
        case('/'):
            total = num1 / num2;
            printf("Answer: %.2f", total);
            break;
        default:
            printf("%c is an invalid operator", &operator);
    }
    return 0;
}
