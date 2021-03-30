#include <stdio.h>

void bubbleSort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
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
    bubbleSort(arr, length);
    printArray(arr, length);

    return 0;
}