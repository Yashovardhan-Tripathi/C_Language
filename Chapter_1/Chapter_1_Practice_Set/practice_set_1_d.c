#include <stdio.h>

int main()
{
    float principle, years, rate, interest;
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter number of years: ");
    scanf("%f", &years);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    interest = (principle * years * rate) / 100;
    printf("Simple Interest is: %.2f\n", interest);
    return 0;
}