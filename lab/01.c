// take input of all data type from user and print the result
#include <stdio.h>
int main()
{
    // declaration
    int a;
    char b;
    float c;
    // take input from user
    printf("Enter a integer value :");
    scanf("%d", &a);
    printf("Enter a character value :");
    scanf(" %c", &b);
    printf("Enter a float value :");
    scanf(" %f", &c);
    // print all the values
    printf("\nInteger value is : %d", a);
    printf("\ncharacter value is : %c", b);
    printf("\nfloat value is : %f", c);
    return 0;
}
