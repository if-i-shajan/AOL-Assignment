#include <stdio.h>
int main()
{
    int A, B, C, min, max;
    scanf("%d %d %d", &A, &B, &C);
    min = (A < B) ? (A < C ? A : C) : (B < C ? B : C);
    max = (A > B) ? (A > C ? A : C) : (B > C ? B : C);
    printf("%d %d\n", min, max);

    return 0;
}