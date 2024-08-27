// Write a program to perform search operation in a array.
#include <stdio.h>
int main()
{
    int size, i, search, count = 0;

    printf("Enter the size of array :");
    scanf("%d", &size);

    int arr1[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter value for %d index ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nYou enter value in array is :");

    for (i = 0; i < size; i++)
    {
        printf(" %d ", arr1[i]);
    }

    printf("\nEnter value for search in array :");
    scanf("%d", &search);

    for (i = 0; i < size; i++)
    {
        if (search == arr1[i])
        {
            count++;
        }
    }

    printf("you enter value for searching is : %d and it enter : %d time in array.", search, count);

    return 0;
}