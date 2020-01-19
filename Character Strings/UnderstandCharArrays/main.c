#include <stdio.h>
#include <stdlib.h>

//Function prototypes
int stringLength(const char string[]);
void stringConcat(char result[], const char str1[], const char str2[]);
//bool stringEqual(const char arr1[], const char arr2[]);

int main()
{
    //Testing stringLength function
    const char word1[] = "Chase";
    int count = stringLength(word1);
    printf("%d", count);

    //Testing stringConcat function


    //Testing the stringEqual function



    return 0;
}

//Function that counts the number of characters in a string
int stringLength(const char string[])
{
    int count = 0;

    while(string[count] != '\0')
        ++count;

    return count;
}

/*
//Function to concatenate two character strings
void stringConcat(char result[], const char str1[], const char str2[])
{


}

//Function that determines if two strings are equal
bool stringEqual(const char arr1[], const char arr2[])
{


}
*/
