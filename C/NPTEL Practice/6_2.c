/*Sudoku Validator
Write a C program to validate a completed 9 × 9 Sudoku grid using a twodimensional array.
A Sudoku solution is valid if:
• Each row contains the digits 1 through 9 exactly once.
• Each column contains the digits 1 through 9 exactly once.
• Each 3 × 3 subgrid contains the digits 1 through 9 exactly once.
For example:
5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 9
Input: 9 lines, each containing 9 integers (1–9) separated by spaces.
Note: There are no row/column separators, dashes, or pipe characters—just
raw numbers.
Output: The program should print:
Valid Sudoku
if the grid is valid, and
Invalid Sudoku
otherwise.
Important Note: Output checking is case-sensitive. Please print the output exactly as specified
*/

#include <stdio.h>

int main() {
    int board[9][9];
    int i, j, k, r, c;
    int num;

    // Read the 9x9 grid
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    // 1. Check Rows
    for (i = 0; i < 9; i++) {
        int count[10] = {0};
        for (j = 0; j < 9; j++) {
            num = board[i][j];
            if (num < 1 || num > 9 || count[num] == 1) {
                printf("Invalid Sudoku");
                return 0;
            }
            count[num] = 1;
        }
    }

    // 2. Check Columns
    for (j = 0; j < 9; j++) {
        int count[10] = {0};
        for (i = 0; i < 9; i++) {
            num = board[i][j];
            if (count[num] == 1) {
                printf("Invalid Sudoku");
                return 0;
            }
            count[num] = 1;
        }
    }

    // 3. Check 3x3 Subgrids
    for (r = 0; r < 9; r += 3) {
        for (c = 0; c < 9; c += 3) {
            int count[10] = {0};
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    num = board[r + i][c + j];
                    if (count[num] == 1) {
                        printf("Invalid Sudoku\n");
                        return 0;
                    }
                    count[num] = 1;
                }
            }
        }
    }

    // If all checks pass
    printf("Valid Sudoku");
    return 0;
}