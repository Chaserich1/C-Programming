#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //strchr() function
    /*
    char str[] = "The quick brown fox";  //The string to be searched
    char ch = 'q';   //The character we are looking at
    char *pGot_char = NULL;   //Pointer initialized to NULL
    pGot_char = strchr(str, ch);  //Stores the address where ch is found
    printf("%s", pGot_char);  //prints quick brown fox
    */

    //strstr() function
    /*
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text,word);
    printf("%s", pFound);  //prints dog has his day
    */

    //strtok example
    /*
    char str[80] = "Hello how are you - my name is - chase";
    const char s[2] = "-";
    char *token;

    //get the first token
    token = strtok(str, s);

    //Walk through the rest
    while(token != NULL) {
        printf(" %s\n", token);
        token = strtok(NULL, s);
    }
    */

    //Counting letters, digits, puncuation example
    char buf[100];   //input buffer
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter an interesting string of less than %d characters:\n", 100);
    scanf("%s", buf);  //read a string into a buffer

    int i = 0;
    while(buf[i]){
        if(isalpha(buf[i]))
            ++nLetters;
        else if(isdigit(buf[i]))
            ++nDigits;
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n", nLetters, nDigits, nPunct);

    return 0;
}
