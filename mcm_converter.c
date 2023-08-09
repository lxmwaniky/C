#include <stdio.h>

int main(){
    char unit;
    float height;
    float convert;
    printf("Unit (m) or (c): ");
    scanf("%c", &unit);
    unit = tolower(unit);
    if (unit == 'm'){
        printf("Enter value to convert to cm: ");
        scanf("%f", &height);
        convert = height * 100;
        printf("New height is %.2f cm", convert);
    }
    else if (unit == 'c'){
        printf("Enter value to convert to m: ");
        scanf("%f", &height);
        convert = height / 100;
        printf("New height is %.2f m", convert);
    }
    else{
        printf("%c is an Invalid Unit", unit);
    }

    return 0;
}
