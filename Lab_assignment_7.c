#include <stdio.h>
#include <stdlib.h>


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int bubbleSort(int arr[],int n)
{
    int swapcount = 0;
    int i,j;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < (n-i-1); j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapcount++;
            }
        }
    }
    return swapcount;
}

int main()
{
    int arr[] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    printf("Array before swap:\n");
    for(int x = 0; x < 9; x++)
    {
        printf("%d ", arr[x]);
    }
    int numSawp = bubbleSort(arr,9);
    printf("\nArray after swap:\n");
    for(int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nNumber of Swaps: %d", numSawp);
    return 0;
}