/*
"Guess the number" C Program. Generate a random number from 0 to 20.
Ask the user to guess the number (validate guess is 0-20). Program
indicates if the number is too high or low. The player wins if they
guess it within five tries.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("This is a number guessing game.\nI have chosen a number between 0 and 20 which you must guess.\n");

    // generate the random number
    srand(time(NULL));
    int randomNumber = rand() % 21;

    // for loop to track the guesses the user has left
    for(int tries = 5; tries > 0; tries--){

        int guess;
        printf("You have %i ", tries);
        printf("guesses left\n");
        printf("Enter a guess between 0 and 20: ");
        scanf("%i", &guess);
        printf("\n");

        if(guess < 0 || guess > 20){
            printf("The number is between 0 and 20...");
        } else if(guess < randomNumber) {
            printf("%i is too low\n", guess);
        } else if(guess > randomNumber) {
            printf("%i is too high\n", guess);
        } else {
            printf("You guessed the number, it was %i!", randomNumber);
            break;
        }

    }

    return 0;
}
