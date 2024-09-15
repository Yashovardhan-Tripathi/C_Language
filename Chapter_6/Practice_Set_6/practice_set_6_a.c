#include<stdio.h>
int main(){
    int a=10;
    int *b;
    b=&a;
    printf("The address of a is %d\n",&a);
    printf("The value of a is %d\n",*b);
    return 0;
}