#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Length of a string
    /*
    char myString[] = "my string";
    printf("The length of this string is: %d", strlen(myString));
    */

    //Copy a string to an existing string with strcpy
    /*
    char src[50], dest[50];
    strcpy(src, "This is src");
    strcpy(dest, "This is destination");
    */

    //Copy a string to an existing string with strcpy
    /*
    char src[40];
    char dest[12];

    memset(dest, '\0', sizeof(dest));
    strcpy(src, "Hello how are you doing");
    strncpy(dest, src, sizeof(dest) - 1;
    */

    //Concat strings
    /*
    char myString[] = "My Name is Chase";
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    printf("\nThe string %s concatenated with %s is ::::\n", myString, input);
    printf("%s", strcat(myString, input));
    */

    //Comparing strings
    /*
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));
    */

    /*
    if(strncmp("astronomy","astro",5) == 0){
        printf("Found: astronomy");
    }

    if(strncmp("astounding","astro",5) == 0){
        printf("Found: astounding");
    }
    */

    return 0;
}
