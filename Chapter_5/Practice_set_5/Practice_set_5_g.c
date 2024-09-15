#include <stdio.h>
void pattern(int line)
{
    if (line == 1)
    {
        printf("*\n");
        return;
    }
    pattern(line - 1);
    for (int i = 0; i < (2*line-1) ; i++)
    {
        printf("*");
    }
    printf("\n");
}

int main()
{
    int line_number=3;
   printf("Enter the number of lines to be print in pattern\n");
    scanf("%d", &line_number);
    pattern(line_number);

    return 0;
}