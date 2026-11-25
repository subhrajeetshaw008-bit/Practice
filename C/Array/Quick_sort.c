//Quick Sort


#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;
    int j;

    for(j = left; j < right; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i+1], &arr[right]);

    return i + 1;
}

void quicksort(int arr[], int left, int right)
{
    if(left < right)
    {
        int p = partition(arr, left, right);

        quicksort(arr, left, p-1);
        quicksort(arr, p+1, right);
    }
}

int main()
{
    int arr[10], i, n;

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, n-1);

    printf("The sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
