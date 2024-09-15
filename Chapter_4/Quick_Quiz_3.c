#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++)
    {
        printf("The number is %d\n",i);
    }
}
