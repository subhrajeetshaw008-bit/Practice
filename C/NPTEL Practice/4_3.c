/*
Check if Two Strings are Anagrams
Write a C program that determines whether two strings are anagrams of
each other. Two strings are anagrams if they contain exactly the same letters
with the same frequencies, but possibly in a different order.
Input
The first line contains an integer n, the size of the strings (no of characters).
The second line contains the first string.
The third line contains the second string.
Output
Print 1 if the two strings are anagrams.
Print 0 otherwise.
Notes
• 1 ≤ n ≤ 20
• Both strings consist only of uppercase English letters (A--Z).
• Both strings have the same number of characters.*/

#include <stdio.h>

int main() {
    int n, i;
    char str1[21], str2[21];
    int freq1[26] = {0}, freq2[26] = {0};

    scanf("%d", &n);
    scanf("%s", str1);
    scanf("%s", str2);

    for (i = 0; i < n; i++) {
        freq1[str1[i] - 'A']++;
        freq2[str2[i] - 'A']++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("0");
            return 0;
        }
    }

    printf("1");
    return 0;
}