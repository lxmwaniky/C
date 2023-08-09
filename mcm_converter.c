#include <stdio.h>

int main(){
    float size;
    float convertedSize;
    printf("Enter size(m): ");
    scanf("%f", &size);
    convertedSize = size * 100;
    printf("%.1f cm", convertedSize);
    return 0;
}
