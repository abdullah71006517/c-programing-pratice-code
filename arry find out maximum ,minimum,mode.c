#include <stdio.h>

int findMax(int arr[], int size)
{

    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}


int findMin(int arr[], int size)
{

    int min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}


int main()
{
    int arry[6] = {5, 6, 88, 99, 10, 55};

    
    int max = findMax(arry, 6);
    int min = findMin(arry, 6);
    int mod = max%min;

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Mod: %d\n", mod);

    return 0;
}

