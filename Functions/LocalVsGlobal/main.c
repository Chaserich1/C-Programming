#include <stdio.h>
#include <stdlib.h>

int myGlobal = 0;

int main()
{
    int myLocalMain = 0;  //local variable
    //can access my global and myLocal
    return 0;
}

void myFunction(){
    int x; //local variable
    //can access myglobal and x, cannot access mylocal
}
