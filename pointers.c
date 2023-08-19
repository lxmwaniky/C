#include <stdio.h>

int main(void){
    int b = 2;
    int *a = &b;
    printf("%d\n", b);
    printf("%p\n", &b);
    printf("%p\n", a);
    return 0;
}
