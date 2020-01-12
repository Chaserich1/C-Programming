/*
Program that plays tic-tac-toe on a 3x3 grid game. Create an array to represent the board.
Can be type char and consist of 10 elements (don't use zero). Each element represents a
coordinate on the board for the user to select. Functions included:
1. checkForWin: checks to see if a player has won or game is a draw
2. drawBoard: redraws the board for each player turn
3. markBoard: sets the char array with a selection and check for an invalid selection

*/

#include <stdio.h>
#include <stdlib.h>
//#include <curses.h>

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkForWin();
void drawBoard();
void markBoard(char mark);


int main()
{
    int gameStatus;
    char mark;
    player = 1;

    do{
        drawBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        markBoard(mark);

        gameStatus = checkForWin();
        if(gameStatus == 1){
            drawBoard();
            printf("\nPlayer %d Wins!!!\n\n", player);
        }

        player++;

    }while(gameStatus == -1);

    return 0;
}

// 1. checkForWin function: 1 for game is over with result, -1 for game in progress, 0 game is over no result
int checkForWin()
{
    int returnValue = 0;

    if(square[1] == square[2] && square[2] == square[3]){
        returnValue = 1;

    } else if(square[4] == square[5] && square[5] == square[6]){
        returnValue = 1;

    } else if(square[7] == square[8] && square[8] == square[9]){
        returnValue = 1;

    } else if(square[1] == square[4] && square[4] == square[7]){
        returnValue = 1;

    } else if(square[2] == square[5] && square[5] == square[8]){
        returnValue = 1;

    } else if(square[3] == square[6] && square[6] == square[9]){
        returnValue = 1;

    } else if(square[1] == square[5] && square[5] == square[9]){
        returnValue = 1;

    } else if(square[3] == square[5] && square[5] == square[7]){
        returnValue = 1;

    } else if(square[1] != '1' && square[2] != '2' && square[3] != '3' &&
              square[4] != '4' && square[5] != '5' && square[6] != '6' &&
              square[7] != '7' && square[8] != '8' && square[9] != '9'){
        returnValue = 0;

    } else{
        returnValue = -1;
    }

    return returnValue;
}

// 2. drawBoard function
void drawBoard()
{
    printf("      Tic Tac Toe    \n\n");
    printf("Player 1 (X) - Player 2 (O)\n\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |  %c   \n", square[1], square[2], square[3]);
    printf("_______|_______|______\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |  %c   \n", square[4], square[5], square[6]);
    printf("_______|_______|______\n");
    printf("       |       |      \n");
    printf("   %c   |   %c   |  %c   \n", square[7], square[8], square[9]);
    printf("       |       |      \n\n");

}

// 3. markBoard function: set the board with the character, x or o in the correct spot in the array
void markBoard(char mark)
{
    if(choice == 1 && square[1] == '1')
        square[1] = mark;
    else if(choice == 2 && square[2] == '2')
        square[2] = mark;
    else if(choice == 3 && square[3] == '3')
        square[3] = mark;
    else if(choice == 4 && square[4] == '4')
        square[4] = mark;
    else if(choice == 5 && square[5] == '5')
        square[5] = mark;
    else if(choice == 6 && square[6] == '6')
        square[6] = mark;
    else if(choice == 7 && square[7] == '7')
        square[7] = mark;
    else if(choice == 8 && square[8] == '8')
        square[8] = mark;
    else if(choice == 9 && square[9] == '9')
        square[9] = mark;
    else{
        printf("Invalid Move!");
        player--;
        getchar(); // pausing program and user must hit enter so it doesn't immediately redraw board
    }

}


