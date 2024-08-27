// make a user define array and print the result
#include <stdio.h>
int main()
{
    // declaration
    int size, i;
    // take input from user as size of array
    printf("Enter size of array :");
    scanf("%d", &size);
    // declare an array
    int arr[size];
    // store value in array using loop
    for (i = 0; i < size; i++)
    {
        printf("Enter element for index %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nYou Entered value is :");
    // print value using  loop
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}