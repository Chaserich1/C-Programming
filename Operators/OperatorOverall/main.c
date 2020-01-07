#include <stdio.h>
#include <stdlib.h>

int main()
{
    //----------- Bitwise Operators --------------
    unsigned int a = 60;       // 0011 1100
    unsigned int b = 13;       // 0000 1101
    int bitAnd = 0, bitOr = 0, bitNot = 0, shiftLeft = 0, shiftTwoRight = 0, shiftFourRight;

    bitAnd = a & b;            // 0000 1100 --12
    printf("Result is: %d\n", bitAnd);

    bitOr = a | b;            // 0011 1101 --61
    printf("Result is: %d\n", bitOr);

    bitNot = ~a;             // 1100 0011
    printf("Result is: %d\n", bitNot);

    shiftLeft = a << 2;      // 1111 0000
    printf("Result is: %d\n", shiftLeft);

    shiftTwoRight = a >> 2;     // 0000 1111
    printf("Result is: %d\n", shiftTwoRight);

    shiftFourRight = a >> 4;    // 0000 0011
    printf("Result is: %d\n", shiftFourRight);

    return 0;


    /*------- Cast and Sizeof Operators ----------

    Casting: (int)21.51 + (int)26.99 is evaluated in C as 21 + 26 due to casting


    SizeOf: how many bytes occupied in memory by a given type


    ----------------------------------------------*/
}
