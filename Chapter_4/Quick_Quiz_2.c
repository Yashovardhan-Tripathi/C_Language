#include<stdio.h>
int main()
{
int num,i=1;
printf("Enter the Number");
scanf("%d",&num);
do{
    printf("The value of i is %d\n",i);
    i++;
}
while(i<num+1);
return 0;
}