#include <stdio.h>

int main()
{
        int x = 6;
        int y = 5;
        //x & y =

        printf("BITWISE AND: %d\n", x & y);   //Bitwise AND
        printf("BITWISE OR: %d\n", x | y);    //Bitwise OR
        printf("BITWISE XOR: %d\n", x ^ y);   //Bitwise XOR
	printf("SHIFT LEFT: %d\n", x << 2);   //Shifts 2 bits to the left
	printf("SHIFT RIGHT: %d\n", x >> 2);  //Shifts 2 bits to the right
        return 0;
}
