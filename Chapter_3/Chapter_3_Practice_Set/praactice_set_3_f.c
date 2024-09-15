#include<stdio.h>
int main()
{
    int N1,N2,N3,N4,Max;
    printf("Enter all four number=");
    scanf("%d %d %d %d",&N1,&N2,&N3,&N4);

    Max = N1 > N2 ? N1 : N2;
    Max = Max > N3 ? Max :N3;
    Max = Max > N4 ? Max :N4;

    printf("\nThe greatest number is=%d",Max);

    return 0;
}