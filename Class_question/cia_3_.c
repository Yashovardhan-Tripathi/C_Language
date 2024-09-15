#include<stdio.h>
void main()
{
    int count=0,sum,avg;
    for(int i=1;i<101;i+=2)
    {
        sum+=i;
        count++;
    }
    printf("Sum is %d\n",sum);
    avg=(sum/count);
    printf("Average is %d",avg);
}