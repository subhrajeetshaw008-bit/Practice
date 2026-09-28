/*Tic-Tac-Toe: Find the Winner
Write a C program to determine the winner of a Tic-Tac-Toe game. The game
board is represented using a 3 × 3 two-dimensional character array. Each cell
contains either X or O.
Task
Given a completed Tic-Tac-Toe board, determine whether Player X or Player O
has won.
There are two players, X and O. You are given a 3 × 3 character matrix in
which each cell contains either X or O.
A player wins if their symbol occurs in all three cells of:
• any row,
• any column,
• the main diagonal, or
• the secondary diagonal.
If no player has three symbols in a row, column, or diagonal, there is no
winner.
Function to Complete
Complete the following function:
char findWinner(char board[3][3]);
The function should examine the given 3 × 3 Tic-Tac-Toe board and:
• Return ’X’ if Player X has three consecutive symbols in a row, column,
or diagonal.
• Return ’O’ if Player O has three consecutive symbols in a row, column,
or diagonal.
• Return ’N’ if neither player has won.
Input
The input consists of 3 lines, each containing 3 characters separated by spaces.
Each character is either X or O.
Output
If Player X wins, print:
Player X wins
If Player O wins, print:
Player O wins
If neither player wins, print:
No winner
*/

#include <stdio.h>

char findWinner(char board[3][3])
{
    /* Check rows */
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return board[i][0];
    }

    /* Check columns */
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == board[1][j] &&
            board[1][j] == board[2][j])
            return board[0][j];
    }

    /* Check main diagonal */
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return board[0][0];

    /* Check secondary diagonal */
    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return board[0][2];

    return 'N';
}

int main()
{
    char board[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf(" %c ", &board[i][j]);

    char winner = findWinner(board);

    if (winner == 'X')
        printf("Player X wins");
    else if (winner == 'O')
        printf("Player O wins");
    else
        printf("No winner");

    return 0;
}