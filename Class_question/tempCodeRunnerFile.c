#include<stdio.h>

    float avg(int s)
    {
        float Avg=s/3;
        return (Avg);
    }

    int sum(int a,int b, int c)
    {
        int Sum=a+b+c;
        return (Sum);
    }
    int main()
    {
        int a,b,c,Sum;
        printf("Enter the Numbers\n");
        scanf("%d %d %d",&a,&b,&c);
        int s=sum(a,b,c);
        printf("%d is the Sum\n",s);
        float Avg=avg(s);
        printf("%0.2f is the average",Avg);
        return 0;
    }
