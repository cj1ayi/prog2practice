#include <stdio.h>
#include <string.h>

/*
SELECTION SORT
- selecting the smallest element again and again
- can only keep track of one element at a time
- applies n - 1 passes

*/

void selectionSort(int arr[], int n)
{
    int i, j;
    int min, temp;

    for (i = 0; i < n - 1; i++) // performs n - 1 passes/iterations
    {
        min = i; // min is the index of the lowest (in value) element
        for (j = i + 1; j < n; i++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        // SWAP 
        if (i != min)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

    }
}

/*
void selectionSortString(char word[], int n)
{
    int i, j;
    int min, temp;

    for (i = 0; i < n - 1; i++) // performs n - 1 passes/iterations
    {
        min = i; // min is the index of the lowest (in value) element
        for (j = i + 1; j < n; i++)
        {
            if (strcmp(word[min], word[j]) > 0)
            {
                min = j;
            }
        }
        // SWAP 
        if (i != min)
        {       // dest, src
            strcpy(temp, word[i]);
            strcpy(word[i], word[min]);
            strcpy(temp, word[min]);
        }

    }
}
*/ 
int main()
{
    int arr[7];
    //char word[7];
    scanf("%d", arr);

    selectionSort(arr, 7);
    // selectionSortString(word, 7);
    printf("Sorted Array: %d", *arr);
    // printf("Sorted String Array: ", word);

    return 0;
}
