#include <stdio.h>
int main()
{
    int n, i = 2, count = 0;
    printf("Enter the number");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("\nThe entered number is 1");
    }
    else
    {
        do
        {
            i++;
            if (n % i == 0)
            {
                count++;
            }
        }while (i <= n / 2);

            if (count == 0)
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