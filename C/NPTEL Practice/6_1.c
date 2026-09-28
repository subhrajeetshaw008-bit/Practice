/*Check Symmetric Matrix
A square matrix is said to be symmetric if it is equal to its transpose.
In other words, a matrix A of size n × n is symmetric if and only if:
A[i][j] = A[j][i] for all 0 ≤ i, j < n.
Write a C program to check whether a given square matrix is symmetric or
not.
Complete the function
int isSymmetric(int A[][n], int n)
that checks if A is a symmetric matrix and returns 1 if symmetric, 0 otherwise.
Input Format
• The first line contains an integer n, the size of the square matrix.
• The next n lines each contain n integers, representing the elements in each
row of the matrix.
Output Format
• Print 1 if the matrix is symmetric.
• Otherwise, print 0.
Note. You can assume that n < 10.
*/

#include <stdio.h>

// Complete this function to check if a matrix is symmetric.
// A is an n*n matrix. Return 1 if A is symmetric and 0 otherwise.

int isSymmetric(int A[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                return 0; // not symmetric
            }
        }
    }
    return 1; // symmetric
}

int main() {
    int n;
    scanf("%d", &n);

    int A[10][10];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("%d", isSymmetric(A, n));

    return 0;
}