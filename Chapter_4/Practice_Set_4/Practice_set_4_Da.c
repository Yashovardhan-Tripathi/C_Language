#include<stdio.h>
int main()
{
    int s=0,i=0;
    
    do{
        s=s+i;
        i++;
    }while(i<11);
    printf("sum of first ten natural number is %d",s);
    return 0;
}