#include <stdio.h>
#include <stdlib.h>

int compareInt(const void* a, const void* b)
{
    const int* p_a = a;
    const int* p_b = b;

    return *p_b - *p_a;
}

int main(void)
{
    int alice = 0, bob = 0;
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    qsort(a, sizeof(a)/sizeof(a[0]), sizeof(int), compareInt);

    for (int i = 0; i < N; i++) {
        alice += i % 2 == 0 ? a[i] : 0;
        bob   += i % 2 == 1 ? a[i] : 0;
    }
    printf("%d\n", alice - bob);

    return 0;
}