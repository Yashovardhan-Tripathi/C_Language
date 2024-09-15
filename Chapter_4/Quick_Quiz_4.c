#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number");
    scanf(" %d",&n);
    for(i=n;i;i--)
    {
    printf("The numbers are %d\n",i);
    }
    return 0;
}