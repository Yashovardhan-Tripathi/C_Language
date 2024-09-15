#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Enter the table number you want to print");
    scanf("%d",&n);
    for(i=n;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            m=i*j;
            printf("%d\n",m);
        }
    }
    return 0;

}