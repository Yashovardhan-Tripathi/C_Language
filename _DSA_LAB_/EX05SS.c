/* Linear search on a sorted array */
#include <stdio.h>
#include <conio.h>
void main()
{
int a[50],i, n, val, found;
printf("Enter number of elements : ");
scanf("%d", &n);
printf("Enter Array Elements : \n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("Enter element to locate : ");
scanf("%d", &val);
found = 0;
for(i=0; i<n; i++)
{
if (a[i] == val)
{
printf("Element found at position %d", i+1);
found = 1;
break;
}
}
if (found == 0)

printf("\n Element not found");
}