#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,count=0;
    printf("Enter the number");
    scanf("%d",&n);
    float num =sqrt(n);
    if(n==1)
    { 
        printf("\nThe entered number is 1");
    }
    else 
    {
    for(i=2;i<=num;i++)
    if(n%i==0)
    {
        count++;
        break;
    }
    if(count==0)
    {
        printf("\nThe number is prime number");
    }
    else
    {
        printf("\nThe number is not prime number");
    }
    }
    return 0;
}