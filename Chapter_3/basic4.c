#include<stdio.h>
int main()
{
    int num;
    printf("Enter Your Number");
    scanf("%d",&num);

    if (num==1)
    {
        printf("\nYour Number is 1.");
    }
    else if(num==2)
    {
        printf("\nYour Number is 2.");
    }
    else if (num==3)
    {
        printf("\nYour Number is 3.");
    }
    else
    {
     printf("\nYour Number is other than 1 ,2 ,3.");
    }
    return 0;
}