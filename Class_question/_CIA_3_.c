#include<stdio.h>
int main()
{
    int sum=0,i,count=0;
    for(i=1;i<501;++i)
    {
        sum+=i;
        count++;
    }
    printf("Sum of the 500 number is %d\n",sum);
    float avg=(float)sum/count;
    printf("Avg of 500 number sum is %0.2f",avg);
    return 0;
}