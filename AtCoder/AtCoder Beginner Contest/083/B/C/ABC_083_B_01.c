#include <stdio.h>

int calc_digit_sum(int n)
{
    int digit_sum = 0;
    while (n != 0) {
        digit_sum += n % 10;
        n = n / 10;
    }
    return digit_sum;
}

int main(void)
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        if (A <= calc_digit_sum(i) && calc_digit_sum(i) <= B) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}