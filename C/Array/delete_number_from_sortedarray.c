//Delete a numberfrom an array which is already sorted in ascending order


#include <stdio.h>

int main()
{
    int array[10], i, n, num, j, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nThe array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter the number to be deleted: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(array[i] == num)
        {
            for(j = i; j < n - 1; j++)
            {
                array[j] = array[j + 1];
            }

            found = 1;
            n--;
            break;
        }
    }

    if(found)
    {
        printf("\nThe array after deletion is:\n");

        for(i = 0; i < n; i++)
        {
            printf("%d ", array[i]);
        }
    }
    else
    {
        printf("\nElement not found in the array.");
    }

    return 0;
}
