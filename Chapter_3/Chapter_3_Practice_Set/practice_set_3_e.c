#include<stdio.h>
int main()
{
    char Letter;
    printf("Enter a Letter=");
    scanf("%c",&Letter);
     
    if(Letter>=97  && Letter<=122)
    {
        printf("\nThe letter u entered is LOWERCASE letter");
    }
    else
    {
        printf("\nThe letter u entered is UPPERCASE letter");
    }
    return 0;
}