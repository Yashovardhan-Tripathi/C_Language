#include<stdio.h>
int main()
{
    int rating;
    printf("Enter your rating in (1-5)=");
    scanf("%d",&rating);
    
    switch (rating)
    {
    case 1 :
    printf("/nYou rated it as 1");
    break;
    case 2 :
    printf("\nYou rated it as 2");
    break;
    case 3:
    printf("\nYou rated it as 3");
    break;
    case 4:
    printf("\nYou rated it as 4");
    break;
    case 5:
    printf("\nYou rated it as 5");
    break;
    default:
    printf("\nYou gave an invalid rating");
    break;
    }
    return 0;
}