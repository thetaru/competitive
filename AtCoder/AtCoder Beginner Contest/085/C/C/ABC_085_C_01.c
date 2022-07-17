#include <stdio.h>

int main(void)
{
    int N, Y;
    scanf("%d %d", &N, &Y);
    int i, j, k;
    int flg = 0;
    int result[3] = {-1, -1, -1};

    for (i = 0; i <= N && flg == 0; i++) {
        for (j = 0; j <= N && flg == 0; j++) {
            if ((k = N - (i + j)) < 0) {
                continue;
            }
            int sum = 10000*i + 5000*j + 1000*k;
            if (sum == Y) {
                flg = 1;
                result[0] = i;
                result[1] = j;
                result[2] = k;
                break;
            }
        }
    }
    printf("%d %d %d\n", result[0], result[1], result[2]);

    return 0;
}