//Bubble Sort


#include <stdio.h>

int main()
{
    int a[10], i, j, n, temp;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("The sorted array is:\n");

    for(i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }

    return 0;
}
