#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberToTest, remainder;

    printf("Enter a number to be tested: ");
    scanf("%i", &numberToTest);

    remainder = numberToTest % 2;

    if(remainder == 0){
        printf("%i is an even number\n", numberToTest);
    } else{
        printf("%i is an odd number\n", numberToTest);
    }
    return 0;
}
