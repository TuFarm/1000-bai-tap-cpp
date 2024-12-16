#include <stdio.h>
#include <stdbool.h>

#define MAXR 100
#define MAXC 100

void inputMatrix(int arr[MAXR][MAXC], int *elements) // Pass 'elements' as a pointer
{
    scanf("%d", elements);
    for (int i = 0; i < *elements; i++)
    {
        for (int j = 0; j < *elements; j++)
            scanf("%d", &arr[i][j]);
    }
}

bool isIdentityMatrix(int arr[MAXR][MAXC], int elements)
{
    for (int i = 0; i < elements; i++)
    {
        for (int j = 0; j < elements; j++)
        {
            if (i == j)
            { // Diagonal elements
                if (arr[i][j] != 1)
                    return false;
            }
            else
            { // Non-diagonal elements
                if (arr[i][j] != 0)
                    return false;
            }
        }
    }
    return true; // Matrix satisfies identity matrix conditions
}

int main()
{
    int arr[MAXR][MAXC];
    int elements;

    inputMatrix(arr, &elements); // Pass the address of 'elements'

    if (isIdentityMatrix(arr, elements))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
