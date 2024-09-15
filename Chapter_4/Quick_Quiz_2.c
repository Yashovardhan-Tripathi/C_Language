#include<stdio.h>
int main()
{
int n,i=1;
printf("Enter the Number");
scanf("%d",&n);
do{
    printf("The value of i is %d\n",i);
    i++;
}
while(i<n+1);
return 0;
}