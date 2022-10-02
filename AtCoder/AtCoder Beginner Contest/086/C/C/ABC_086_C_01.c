#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);

    int t_old = 0, x_old = 0, y_old = 0;
    int time, dist;
    for (int i = 0; i < N; i++) {
        int t, x, y;
        scanf("%d %d %d", &t, &x, &y);

        time = abs(t_old - t);
        dist = abs(x_old - x) + abs(y_old - y);

        if ((t + x + y) % 2 != 0 || time < dist) {
            printf("No");
            return 0;
        }

        t_old = t, x_old = x, y_old = y;
    }
    printf("Yes");
    return 0;
}