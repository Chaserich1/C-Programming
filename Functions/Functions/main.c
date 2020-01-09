#include <stdio.h>
#include <stdlib.h>

/*/////////////////////////////////////
void addition(num1, num2);

int main()
{
    int a = 1, b = 2;
    int sum = addition(a, b);
    printf("%i", sum);

    return 0;
}

void addition(num1, num2){
    int sum;
    sum = num1 + num2;
    //return sum;
}
*/
/*//////////////////////////////////////
void add(){

}

int main()
{
    add();

    return 0;
}
*/

void multiplyTwoNumbers(int x, int y){
    int result = x * y;
    printf("The result of %d multiplied by %d is: %d\n", x, y, result);
}

int main()
{
    multiplyTwoNumbers(10, 20);
    multiplyTwoNumbers(5, 12);
    multiplyTwoNumbers(50, 2);

    return 0;
}
