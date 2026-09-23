/*
Remove Duplicate Elements in Unsorted Array
Write a C program to read n integers into an array and remove all duplicate
elements while preserving the order of their first occurrence. Print the resulting
array.
Input Format
The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers.
Output Format
Print the array after removing duplicate elements.
Constraints
• 1 ≤ n ≤ 100
• Array elements are integers within the range of the int data type*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print only the first occurrence of each element
    for (int i = 0; i < n; i++) {
        int duplicate = 0;

        // Check if arr[i] has appeared earlier
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}