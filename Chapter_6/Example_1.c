#include<stdio.h>
int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    int *j;
    j=&i;
    printf("Add i=%u\n",&i);
    printf("Add i=%u\n",j);
    printf("Add j=%u\n",&j);
    printf("Value i=%u\n",i);
    printf("Value i=%u\n",*(&i));
    printf("Value i=%u\n",*j);
    return 0;    
}