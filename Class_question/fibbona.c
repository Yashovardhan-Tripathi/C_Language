#include<stdio.h>
int main()
{
    int n,i,t1=0,t2=1,term;
    scanf("%d",&n);
    printf("%d  ",t1);
    //printf("%d  ",t2);
    for (i=0;i<=n;i++)
    {
        t1=t2;
        t2=term;
        term=t1+t2;
        printf("%d  ",term);
    }

    return 0;
}