#include<stdio.h>
int main()
{
 int n,f=1;
 printf("Enter the number");
 scanf("%d",&n);
 for(int i=n;i>0;i--){
 f=f*i;}
printf("Factorial of num is %d",f);
return 0;
}
