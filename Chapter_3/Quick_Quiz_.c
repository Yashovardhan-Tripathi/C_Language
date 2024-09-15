#include<stdio.h>
int main()
{
    int Marks;
    printf("Enter your marks=");
    scanf("%d",&Marks);

    if (Marks<=100 && Marks>=0)
    {
        switch (Marks/10)
        {
        case 10:
            printf("\nYou got A grade");
            break;
        case 9:
            printf("\nYou got B grade");
            break;
        case 8:
            printf("\nYou got C grade");
            break;
        case 7:
            printf("\nYou got D grade");
            break;
        default :
            printf("\nYou got F grade");
            break;
        }
    }
    else
    {
    printf("\nInvalid Marks");
    }
    return 0;
}