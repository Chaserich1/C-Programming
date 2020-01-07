#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Byte size of an int: %u bytes\n", sizeof(int));
    printf("Byte size of an short: %u bytes\n", sizeof(short));
    printf("Byte size of an char: %u bytes\n", sizeof(char));
    printf("Byte size of an long: %u bytes\n", sizeof(long));
    printf("Byte size of an long long: %u bytes\n", sizeof(long long));
    printf("Byte size of an float: %u bytes\n", sizeof(float));
    printf("Byte size of an double: %u bytes\n", sizeof(double));
    printf("Byte size of an long double: %u bytes\n", sizeof(long double));

    return 0;
}
