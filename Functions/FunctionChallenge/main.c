#include <stdio.h>
#include <stdlib.h>

//Greatest common denominator function
//int gdc(int u, int v);

//Absolute Value function
void abso(float value)
{
    float absvalue;
    if(value < 0){
        absvalue = (unsigned)value;
    } else {
        absvalue = value;
    }
    printf("The absolute value of %f is: %f", value, absvalue);
    //return absvalue;
}

void squareRoot(int value)
{

}

int main()
{
    abso(1);
    abso(-5);

    return 0;
}

//int gcd(int u, int v)
//{

//}
