/* Write a program in C to create a grade calculator based on the percentage marks obtained. Use "if - else if - else" statements to
assign grades like O for 91-100, A for 81-90, B for 71-80, C for 61-70, D for 51-60, E for 41-50, F for 40 and below.*/
#include <stdio.h>
int main()
{
    int marks;

    printf("Enter your marks :");
    scanf("%d", &marks);

    if (marks >= 91 && marks <= 100)
    {
        printf("He/She stand at O position");
    }

    else if (marks >= 81 && marks <= 90)
    {
        printf("He/She stand at A position");
    }

    else if (marks >= 71 && marks <= 80)
    {
        printf("He/She stand at B position");
    }

    else if (marks >= 61 && marks <= 70)
    {
        printf("He/She stand at C position");
    }

    else if (marks >= 51 && marks <= 60)
    {
        printf("He/She stand at D position");
    }

    else if (marks >= 41 && marks <= 50)
    {
        printf("He/She stand at E position");
    }

    else if (marks >= 1 && marks <= 40)
    {
        printf("He/She stand at F position");
    }

    else
    {
        printf("ERROR: Marks should be between 0 to 100");
    }

    return 0;
}