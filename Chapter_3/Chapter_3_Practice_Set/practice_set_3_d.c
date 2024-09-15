#include<stdio.h>
int main()
{
    int Year;
    printf("Enter a Year=");
    scanf("%d",&Year);

    if(((Year%4==0 && Year%100!=0) || Year%400==0))
    {
        printf("\nThe Year u entered is a leap Year");
    }
    else
    {
        printf("\nIt is not a leap Year");
    }
    return 0;
}