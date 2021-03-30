#include <stdio.h>

void selectionSort(int arr[], int length)
{

    for (int i = 0; i <= length - 1; i++)
    {
        int min = arr[i];

        for (int j = i + 1; j <= length - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                arr[j]=arr[i];
            }
        }
        arr[i]=min;

    }
}

void printArray(int arr[], int length)
{

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 5, 2, 3, 9, 7, 5};
    int length = sizeof(arr) / sizeof(int);
    printArray(arr, length);
    selectionSort(arr, length);
    printArray(arr, length);
    return 0;
}