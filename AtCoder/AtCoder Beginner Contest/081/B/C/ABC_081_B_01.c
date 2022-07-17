#include <stdio.h>

int main(void)
{
    int N;
    int A[N];
    int i, flg = 0, count = 0;

    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    while (flg == 0) {
        for (i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                flg = 1;
                break;
            }
            A[i] = A[i] / 2;
        }
        count++;
    }
    printf("%d\n", count-1);
    return 0;
}