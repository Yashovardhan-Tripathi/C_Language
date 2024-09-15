#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age=");
    scanf("%d",&age);

   { if(age>=18 || age<=85 )
    { 
    printf("\nYou can drive ");
    }
    else 
    {
    printf("\nYou cannot drive as you are above age limit");
    }
   }
    if(age==66)
    {
    printf("\nYou can drive ");
    }
     printf("\n%d",age);
}