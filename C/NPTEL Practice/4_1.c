/*
Generic Search Using Pointers
Complete the C function that searches for the first occurrence of key in the
array.
int *find(int arr[], int n, int key);
If the key is found, the function should return a pointer to the first occurrence
of the key.
If the key is not found, the function should return NULL.
This function will be used by the main() function to perform the following
task:
High-Level Description of the Template Program
The provided program performs the following steps:
1. Reads an integer n.
2. Reads n integers into an array.
3. Reads an integer key.
4. Calls find(arr, n, key).
5. If find() returns NULL, prints:
Key not found.
6. Otherwise, the program uses the returned pointer to:
(a) determine the index of the first occurrence,
(b) print the value found,
(c) print the index of the value, and
(d) print all elements from the found element to the end of the array.*/

#include <stdio.h>

int *find(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return &arr[i];
    }

    return NULL;
}

int main()
{
    int n, key;

    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int *ptr = find(arr, n, key);

    if (ptr == NULL)
    {
        printf("Key not found.\n");
    }
    else
    {
        printf("Value found: %d\n", *ptr);
        printf("Index: %ld\n", ptr - arr);

        printf("Elements from the first occurrence:\n");

        while (ptr < arr + n)
        {
            printf("%d ", *ptr);
            ptr++;
        }

        printf("\n");
    }

    return 0;
}

