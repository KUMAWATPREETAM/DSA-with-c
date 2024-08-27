// write a c program to perform search operation,find largest number and find how many times the number repeat itself
#include <stdio.h>
int main()
{
    int i, size, max = 0, count = 0, search;
    printf("Enter the size of array :");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter value for %d :", i);
        scanf("%d", &arr[i]);
    }

    printf("\nyou enter value in array is :");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter value for search in array : ");
    scanf("%d", &search);
    for (i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            count++;
        }
    }
    printf("You enter value for search is :%d \n And you enter this value %d time in array\n", search, count);

    for (i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("\n %d is a largest number in your entered element", max);

    return 0;
}
