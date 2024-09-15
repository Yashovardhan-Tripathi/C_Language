#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number=");
    scanf("%d",&num);
    if(num%2==0)
    {
    printf("\nNumber is Even");
    }
    else
    {
        printf("\nNumber is Odd");
    }
    return 0;
}