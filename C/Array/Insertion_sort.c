//Insertion Sort


#include <stdio.h>

int main()
{
    int a[10], i, j, key, n;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
    }

    printf("The sorted array is:");

    for(i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
