/*Write a C program that takes a single lowercase English letter and a positive
integer (k) as input, and shifts the letter (k) positions forward in the alphabet
using the Caesar cipher technique.
If the shift goes beyond ’z’, it should wrap around to the beginning of the
alphabet.
You may assume the input is always a valid lowercase letter (’a’ to ’z’)
and (0 ≤ k ≤ 25).
Input
The first line contains a single lowercase letter.
The second line contains an integer (k).
Output
Print the lowercase letter obtained after shifting the input letter forward by
(k) positions.
Output
If there are k odd numbers in the sequence, then output the k
th occurrence of
an odd number in the sequence, if present. If there are less than k odd numbers
in the sequence, output -1
*/

#include <stdio.h>
int main () 
{
    char letter;
    int k;
    scanf (" %c",&letter);
    scanf("%d",&k);
    letter = ((letter - 'a' + k)%26)+'a';
    printf("%c",letter);
    return 0;
}