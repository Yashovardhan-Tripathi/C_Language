#include<stdio.h>
int sum_natural(int n)
{
    if(n==1)
    return 1;
    else
    return(n+sum_natural(n-1));
}

int main()
{
    int number;
    printf("Enter the number to find the sum");
    scanf("%d",&number);
    if(number>0)
    printf("\nThe Sum of the natural numbers is :%d",sum_natural(number));
    else
    printf("The Number you entered is 0.");

    return 0;
}