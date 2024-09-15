#include<stdio.h>
void increment(int *b);
int main()
{
    int a=10;
    int*pt=&a;
    printf("The value of the a is %d\n",a);
    increment(pt);
    printf("The value of the a after increment is %d\n",*pt);
    return 0;
}
void increment(int *b)
{
    *b*=10;
}