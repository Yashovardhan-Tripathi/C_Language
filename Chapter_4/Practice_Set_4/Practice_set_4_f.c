#include<stdio.h>
int main()
{
    int i,j,m,t,s=0;
    printf("Enter the Table no.");
    scanf("%d",&t);
    for(i=t;i<=t;i++)
    {
        for(j=1;j<=10;j++)
        {
            m=i*j;
            printf("\n%d*%d=%d",i,j,m);
            s=s+m;
        }
        
        printf("\nThe sum of number is %d",s);
    }
    return 0;

}