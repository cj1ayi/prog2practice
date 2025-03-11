#include <stdio.h>

void copyArray(int A[], int B[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        B[i] = A[i];
}


int main()
{
    int n = 5;
    // declaring 2 arrays
    int A[5] = {2, 4, 6, 8, 10};
    int B[n];

    copyArray(A, B, n);

    printf("Array B contents: \n");
    int i;
    for (i = 0; i < n; i++)
        printf("%d ",B[i]);

    return 0;
}