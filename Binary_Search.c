#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    while (q--)
    {
        int x;
        scanf("%d", &x);

        if (bsearch(&x, arr, n, sizeof(int), compare) != NULL)
            printf("found\n");
        else
            printf("not found\n");
    }
    return 0;
}
