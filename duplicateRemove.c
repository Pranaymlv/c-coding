#include <stdio.h>

void removeDuplicates(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = a[j + 1];
                j--;
            }
        }
    }
    printf("array without duplicate: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
void main()
{
    int a[100], n, i, ans;
    printf("enter the number of element\n");
    scanf("%d", &n);
    printf("enter the  element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    removeDuplicates(a, n);
}