// add all the element of 2D array
#include <stdio.h>
int main()
{
    int size, row, col, m1[100][100], m2[100][100], sum[100][100];

    printf("Enter the size of matrix :");
    scanf("%d", &size);

    printf("Enter %d element in matrix ", size * size);

    printf("\nEnter value for first matrix :\n");

    // matrix 1

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("Enter value for matrix [%d][%d] :", row, col);
            scanf("%d", &m1[row][col]);
        }
    }

    printf("\nFirst matrix :\n");

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%d ", m1[row][col]);
        }
        printf("\n");
    }

    printf("\nEnter value for second matrix :\n");
    // matrix 2

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("Enter value for matrix [%d][%d] :", row, col);
            scanf("%d", &m2[row][col]);
        }
    }

    printf("second matrix :\n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%d  ", m2[row][col]);
        }
        printf("\n");
    }

    // sum of both matrix
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            sum[row][col] = m1[row][col] + m2[row][col];
        }
        printf("\n");
    }

    // print of sum of both matrix
    printf("\nSum of matrix is :\n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("%d  ", sum[row][col]);
        }
        printf("\n");
    }

    return 0;
}
