#include <stdio.h>
void qsort(int arr[20], int fst, int last);
void main()
{
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:06\n\n");
    int arr[30];
    int i, size;
    printf("Enter total no. of the elements : ");
    scanf("%d", &size);
    printf("Enter total %d elements : \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    qsort(arr, 0, size - 1);
    printf("\n Quick sorted elements \n");
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}
void qsort(int arr[20], int fst, int last)
{
    int i, j, pivot, tmp;
    if (fst < last)
    {
        pivot = fst;
        i = fst;
        j = last;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j)
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
        tmp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = tmp;
        qsort(arr, fst, j - 1);
        qsort(arr, j + 1, last);
    }
}