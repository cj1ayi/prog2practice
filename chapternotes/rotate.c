#include <stdio.h>

/*
Write a function void RotateRight (int A[], int n, int x) which will
rotate the elements of array A towards the right by x number of positions.
Assume that x > 0. For example, let the original integer array contain the
1.4. RELATIONSHIP BETWEEN ARRAYS AND POINTERS 13
elements 10, -5, 23, -8, and 7 4. The rotated list after calling RotateRight (A,
5, 1) will contain the elements 7 4, 10, -5, 23, -8. Using the original array
A, calling RotateRight (A, 5, 3) will result into 23, -8, 74, 10, -5. */

void rotateRight(int A[], int n, int x)
{
    int i;
    int temp[n];
    // Fill the temporary array with the rotated values
    for (i = 0; i < n; i++)
        temp[(i + x) % n] = A[i];

    // Copy back to the original array
    for (i = 0; i < n; i++)
        A[i] = temp[i];

}

int main()
{
    int A[5] = {1, 2, 3, 4, 5};

    printf("Original Array:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", A[i]);
    printf("\n");

    rotateRight(A, 5, 2);

    printf("Rotated Array:\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", A[i]);
    printf("\n");

    return 0;

}