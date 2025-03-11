#include <stdio.h>

int search(int A[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == A[i])
            return i;
    }
    return -1;

}

int main()
{
    int A[5] = {10, -5, 23, -8, 74};

    int key_found = search(A, 5, 10);
    if (key_found != -1)
        printf("Key found at index %d\n", key_found);
    else
        printf("Key not found\n");

    return 0;
}