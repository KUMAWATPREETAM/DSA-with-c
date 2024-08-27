// write a c program to find largest number in a array
#include <stdio.h>
int main()
{
    int i, size, max = 0;
    printf("Enter the size of an array :");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter value for index %d :", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    // max = 0
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
