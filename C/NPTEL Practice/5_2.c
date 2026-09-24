/*Generate All Binary Strings of a Given Length
Complete the genBinary() function in the recursive C program below that
generates all binary strings of length N.
Input
A positive integer N, where
0 < N < 10.
Output
Print all binary (0/1) sequences of length N, one per line.
The sequences must be printed in natural lexicographic order.
*/

#include <stdio.h>
#include <stdlib.h>

void genBinary(char *s, int i, int N) {
    if (i == N) {
        s[N] = '\0';
        printf("%s\n", s);
        return;
    }
    s[i] = '0';
    genBinary(s, i + 1, N);
    s[i] = '1';
    genBinary(s, i + 1, N);
}

int main(void) {
    char A[8];
    int n;
    scanf("%d", &n);

    genBinary(A, 0, n);

    return 0;
}