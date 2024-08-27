// searching operartion in a matrix
#include <stdio.h>
int main()
{
    int row, col, size, search, count = 0, arr[100][100];

    printf("Enter the size of matrix :");
    scanf("%d", &size);
    printf("\nEnter %d element in matrix :\n", size * size);

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            printf("Enter value for matrix [%d][%d]", row, col);
            scanf("%d", &arr[row][col]);
        }
    }
    printf("\nYour Enter matrix is :\n");
    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {

            printf("%d  ", arr[row][col]);
        }
        printf("\n");
    }
    // search concept of a value in array
    printf("Enter value for search :");
    scanf("%d", &search);

    for (row = 0; row < size; row++)
    {
        for (col = 0; col < size; col++)
        {
            if (search == arr[row][col])
            {
                count++;
            }
        }
    }

    printf("Searching value is : %d \n It is present in matrix is : %d times", search, count);

    return 0;
}