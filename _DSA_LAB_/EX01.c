#include <stdio.h>
void setUnion(int set1[], int size1, int set2[], int size2)
{
    int i, j;
    int unionSet[size1 + size2];
    int unionSize = 0;
    for (i = 0; i < size1; i++)
    {
        unionSet[unionSize++] = set1[i];
    }
    for (i = 0;
         i < size2; i++)
    {
        int found = 0;
        for (j = 0;
             j < size1; j++)
        {
            if (set2[i] == set1[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unionSet[unionSize++] = set2[i];
        }
    }
    printf("Union: ");
    for (i = 0;
         i < unionSize; i++)
    {
        printf("%d ", unionSet[i]);
    }
printf("\n");
}
void setIntersection(int set1[], int size1, int set2[], int size2)
{
    int i, j;
    printf("Intersection: ");
    for (i = 0;
         i < size1; i++)

    {
        for (j = 0;
             j < size2; j++)

        {
            if (set1[i] == set2[j])

            {
                printf("%d ", set1[i]);
                break;
            }
        }
    }
    printf("\n");
}
void setDifference(int set1[], int size1, int set2[], int size2)
{
    int i, j;
    printf("Difference (Set1 - Set2): ");
    for (i = 0; i < size1; i++)
    {
        int found = 0;
        for (j = 0; j < size2; j++)
        {
            if (set1[i] == set2[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("%d ", set1[i]);
        }
    }
    printf("\n");
}
void setSymmetricDifference(int set1[], int size1, int set2[], int size2)
{
int i, j;
printf("Symmetric Difference: ");
for (i = 0; i < size1; i++)
{
    int found = 0;
    for (j = 0; j < size2; j++)
    {
        if (set1[i] == set2[j])
        {
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("%d ", set1[i]);
    }
}
for (i = 0; i < size2; i++)
{
    int found = 0;
    for (j = 0; j < size1; j++)
    {
        if (set2[i] == set1[j])
        {
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("%d ", set2[i]);
    }
}
printf("\n");
}
int main()
{
    int set1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(set1) / sizeof(set1[0]);
    int set2[] = {4, 5, 6, 7, 8};
    int size2 = sizeof(set2) / sizeof(set2[0]);
    setUnion(set1, size1, set2, size2);
    setIntersection(set1, size1, set2, size2);
    setDifference(set1, size1, set2, size2);
    setSymmetricDifference(set1, size1, set2, size2);
    return 0;
}