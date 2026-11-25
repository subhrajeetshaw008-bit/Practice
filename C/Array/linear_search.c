//Linear Search


#include <stdio.h>

int main()
{
    int arr[10];
    int i, n, element;

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\n array[%d]:", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is:");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nEnter the element to be searched:");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            printf("%d is found at position %d", element, i);
            break;
        }
    }

    if(i == n)
    {
        printf("%d is not found in the array", element);
    }

    return 0;
}
