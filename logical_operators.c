#include <stdio.h>

int main()
{
        int x, y;

        printf("Enter x: ");
        scanf("%d", &x);
        printf("Enter y: ");
        scanf("%d", &y);

        printf("LOGICAL AND: %d\n", x && y);   //Logical AND
        printf("LOGICAL OR: %d\n", x || y);   //Logical OR
        
        return 0;
}