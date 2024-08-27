// Write a program in C to create a grade calculator based on the percentage marks obtained. Use "if - else if - else" statements to assign grades like O for 91-100, A for 81-90, B for 71-80, C for 61-70, D for 51-60, E for 41-50, F for 40 and below.

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks :");
    scanf("%d", &marks);

    if (marks >= 91 && marks <= 100)
    {
        printf("You obtain grade O ");
    }
    else if (marks >= 81 && marks <= 90)
    {
        printf("You obtain grade A ");
    }
    else if (marks >= 71 && marks <= 80)
    {
        printf("You obtain grade B ");
    }
    else if (marks >= 61 && marks <= 70)
    {
        printf("You obtain grade C ");
    }
    else if (marks >= 51 && marks <= 60)
    {
        printf("You obtain grade D ");
    }
    else if (marks >= 41 && marks <= 50)
    {
        printf("You obtain grade E ");
    }
    else if (marks < 40)
    {
        printf("You obtain grade F ");
    }
    else
    {
        printf("Enter valid number");
    }

    return 0;
}