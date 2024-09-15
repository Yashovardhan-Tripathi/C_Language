#include<stdio.h>
int main()
{
    int M1,M2,M3,Total;
    printf("Enter your M1 Marks=");
    scanf("%d",&M1);
    printf("\nEnter your M2 Marks=");
    scanf("%d",&M2);
    printf("\nEnter your M3 Marks=");
    scanf("%d",&M3);
    Total=M1+M2+M3;
    printf("\nYour Total Marks are=%d",Total);
    int Percentage= (Total/3);
    printf("\nYour Percentage is=%d",Percentage);

    if (M1<33 || M2<33 || M3<33)
    {
         printf("\nYou are FAIL as u have Marks less than 33");
    }
    else if(Percentage<40)
    {
        printf("\nYou are FAIL as u have Percentage less than 40");
    }
    else
    {
        printf("\nYou are PASSED");
    }
    return 0;
}