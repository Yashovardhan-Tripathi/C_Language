#include<stdio.h>
int main()
{
    float tax=0, income;
    printf("Enter your income=");
    scanf("%f",&income);

    if(income>=250000 && income<=500000)
    {
        tax = tax + 0.5*(income-250000);
    }
    if(income>=500000 && income<=1000000)
    {
        tax = tax + 0.20*(income-500000);
    }
    if(income>=1000000)
    {
        tax = tax + 0.30*(income-1000000);
    }
    printf("\nYour Income Tax to be paid is %0.2f",tax);

    return 0;
}