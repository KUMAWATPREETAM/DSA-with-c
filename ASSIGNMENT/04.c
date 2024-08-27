// insert a number in a array
#include <stdio.h>
int main()
{
    int i, size, insert;
    printf("Enter the size of array :");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size - 1; i++)
    {
        printf("Enter value for %d index :", i);
        scanf("%d", &arr[i]);
    }
    printf("Your Enter array is :");
    for (i = 0; i < size - 1; i++)
    {
        printf(" %d ", arr[i]);
    }

    for (i = size - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    printf("\nEnter a value for insert :");
    scanf("%d", &insert);
    printf("your inserted array is :");
    arr[0] = insert;
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }

    // printf(" your new array with insert value is :%d", arr[i]);

    return 0;
}
