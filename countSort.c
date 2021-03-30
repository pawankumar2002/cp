#include <stdio.h>

void countSort(int arr[], int size, int max)
{
    int countArray[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        countArray[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        countArray[arr[i]]++;
    }

    int j = 0; //counter foor given array
    for (int i = 0; i < max + 1; i++)
    {
        while (countArray[i] > 0)
        {
            arr[j] = i;
            j++;
            countArray[i]--;
        }
    }
}

int main()
{
    int arr[10] = {2, 2, 6, 4, 6, 9, 23, 6, 5, 24};
    countSort(arr, 10, 24);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}