#include <stdio.h>

void insertionSort(int arr[], int length)
{
    for (int i = 1; i <= length - 1; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    insertionSort(arr, length);
    printArray(arr, length);

    return 0;
}