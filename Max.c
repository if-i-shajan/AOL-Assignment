#include <stdio.h>
int main()
{
    int N, x, max = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d\n", max);
    return 0;
}