#include<stdio.h>
int main()
{
    int s=0,i=1;
    
    while(i<=10)
    {
     s=s+i;
     i++;
    }
    printf("sum of first ten natural number is %d",s);
    return 0;
}