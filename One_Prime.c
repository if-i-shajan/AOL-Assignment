#include <stdio.h>
int main()
{
    int i, N, count = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("YES", N);
    else
        printf("NO", N);
    return 0;
}