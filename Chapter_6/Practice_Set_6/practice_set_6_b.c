#include<stdio.h>
void pointer(int b)
{
    printf("The address of variable b is %u\n",&b);
}
int main()
{
    int i=5;
    printf("The value of i is %d\n ",i);
    pointer(i);
    printf("The address of i is %u\n ",&i);
    return 0;
}