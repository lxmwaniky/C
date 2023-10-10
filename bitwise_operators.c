#include <stdio.h>

int main()
{
        int x, y;

        printf("Enter x: ");
        scanf("%d", &x);
        printf("Enter y: ");
        scanf("%d", &y);

        printf("BITWISE AND: %d\n", x & y);   //Bitwise AND
        printf("BITWISE OR: %d\n", x | y);    //Bitwise OR
        printf("BITWISE XOR: %d\n", x ^ y);   //Bitwise XOR
	printf("SHIFT LEFT: %d\n", x << 2);   //Shifts 2 bits to the left
	printf("SHIFT RIGHT: %d\n", x >> 2);  //Shifts 2 bits to the right
        return 0;
}
