#include<stdio.h>
int main()
{
    int Marks;
    printf("Enter your marks=");
    scanf("%d",&Marks);

    if (Marks<=100 && Marks>=0)
    {
        if (Marks>=91 && Marks<=100)

        {
            printf("\nYou got A grade");
        }
        else if (Marks<=90 && Marks>=81)
        {
            printf("\nYou got B grade"); 
        }
        else if (Marks<=80 && Marks>=71)
        {
            printf("\nYou got C grade");
        }
        else if (Marks<=70 && Marks>=61)
        {
            printf("\nYou got D grade");
        }
        else
        {
            printf("\nYou got E grade");
        }

    }
    else
    {
    printf("\nInvalid Marks");
    }
    return 0;
}