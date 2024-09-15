#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d",&age);

    if(age<=75 && age>=18)
    {
        printf("You can  drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}