#include <stdio.h>

int add(int a, int b){
    int result = a + b;
    return result;
}

int main(void){
    int output = add(2, 5);
    printf("%d", output);
    return 0;
}


