//Binary Search


#include <stdio.h>

int main()
{
    int arr[10], n, i, mid, element, end, beg;

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\n array[%d]:", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe sorted array is:");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;

    printf("\nThe element to be searched?");
    scanf("%d", &element);

    while(beg <= end)
    {
        if(arr[mid] < element)
        {
            beg = mid + 1;
        }
        else if(arr[mid] == element)
        {
            printf("%d is found at %d", element, mid);
            break;
        }
        else
        {
            end = mid - 1;
        }

        mid = (beg + end) / 2;
    }

    if(beg > end)
    {
        printf("%d is not found in array", element);
    }

    return 0;
}
