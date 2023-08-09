#include <stdio.h>
#include <math.h>

int main(){
    float A;
    float B;
    float C;
    printf("Height: ");
    scanf("%f", &A);
    printf("Base: ");
    scanf("%f", &B);
    C = sqrt(A*A + B*B);
    printf("Hypotenuse: %.2 f", C);
    return 0;
}
