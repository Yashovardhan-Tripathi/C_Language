#include <stdio.h>
#include <stdlib.h>
// Function prototypes
void addPolynomials(int *p1, int *p2, int *result, int n1, int n2);
void multiplyPolynomials(int *p1, int *p2, int *result, int n1, int n2);
int evaluatePolynomial(int *p, int degree, int x);
void printPolynomial(int *p, int degree);
int main()
{
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:07\n\n");
    int choice;
    int degree1, degree2;
    printf("Enter the degree of the first polynomial: ");
    scanf("%d", &degree1);
    printf("Enter the degree of the second polynomial: ");
    scanf("%d", &degree2);
    int *poly1 = (int *)malloc((degree1 + 1) * sizeof(int));
    int *poly2 = (int *)malloc((degree2 + 1) * sizeof(int));
    printf("Enter coefficients for the first polynomial (highest degree first):\n");
    for (int i = degree1; i >= 0; i--)
    {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly1[i]);
    }
    printf("Enter coefficients for the second polynomial (highest degree first):\n");
    for (int i = degree2; i >= 0; i--)
    {
        printf("Coefficient of x^%d: ", i);
        scanf("%d", &poly2[i]);
    }
    do
    {
        printf("\nMenu:\n");
        printf("1. Add Polynomials\n");
        printf("2. Multiply Polynomials\n");
        printf("3. Evaluate Polynomial\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int maxDegree = (degree1 > degree2) ? degree1 : degree2;
            int *result = (int *)calloc(maxDegree + 1, sizeof(int));
            addPolynomials(poly1, poly2, result, degree1, degree2);
            printf("Result of Addition:\n");
            printPolynomial(result, maxDegree);
            free(result);
            break;
        }
        case 2:
        {
            int resultDegree = degree1 + degree2;
            int *result = (int *)calloc(resultDegree + 1, sizeof(int));
            multiplyPolynomials(poly1, poly2, result, degree1, degree2);
            printf("Result of Multiplication:\n");
            printPolynomial(result, resultDegree);
            free(result);
            break;
        }
        case 3:
        {
            int x;
            printf("Enter the value of x: ");
            scanf("%d", &x);
            printf("Polynomial 1 Evaluation: %d\n", evaluatePolynomial(poly1, degree1, x));
            printf("Polynomial 2 Evaluation: %d\n", evaluatePolynomial(poly2, degree2, x));
            break;
        }
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 4);
    free(poly1);
    free(poly2);
    return 0;
}
// Function to add two polynomials
void addPolynomials(int *p1, int *p2, int *result, int n1, int n2)
{
    int maxDegree = (n1 > n2) ? n1 : n2;
    for (int i = 0; i <= maxDegree; i++)
    {
        int coeff1 = (i <= n1) ? p1[i] : 0;
        int coeff2 = (i <= n2) ? p2[i] : 0;
        result[i] = coeff1 + coeff2;
    }
}
// Function to multiply two polynomials
void multiplyPolynomials(int *p1, int *p2, int *result, int n1, int n2)
{
    for (int i = 0; i <= n1; i++)
    {
        for (int j = 0; j <= n2; j++)
        {
            result[i + j] += p1[i] * p2[j];
        }
    }
}
// Function to evaluate a polynomial at a given value of x
int evaluatePolynomial(int *p, int degree, int x)
{
    int result = 0;
    int power = 1;
    for (int i = 0; i <= degree; i++)
    {
        result += p[i] * power;
        power *= x;
    }
    return result;
}
// Function to print a polynomial
void printPolynomial(int *p, int degree)
{
    for (int i = degree; i >= 0; i--)
    {
        if (p[i] != 0)
        {
            if (i != degree)
            {
                printf(" %s", (p[i] > 0) ? "+" : "-");
            }
            if (i == 0 || p[i] != 1)
            {
                printf(" %d", abs(p[i]));
            }
            if (i > 0)
            {
                printf("x");
                if (i > 1)
                {
                    printf("^%d", i);
                }
            }
        }
    }
    printf("\n");
}