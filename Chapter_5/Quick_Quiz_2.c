#include <stdio.h>
int area_sqr(int s)
{
    return (s * s);
}

int main()
{
    int a;
    printf("Enter the side of Square");
    scanf("%d", &a);
    int area = area_sqr(a);
    printf("%d", area);
    return 0;
}
