#include<stdio.h>
int main()
{
    float f;
    float c;
    printf("Temp in celeius \n");
    scanf("%f",&c);
    f=((c*9/5)+32);
    printf("Temp in farenheit is %f \n",f);
    return 0;
}