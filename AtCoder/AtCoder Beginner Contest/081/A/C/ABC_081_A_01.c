#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, cnt = 0;
    char *s = NULL;
    scanf("%ms", &s);
    for (i = 0; i < sizeof(s); i++) {
        if (s[i] == '1') {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    free(s);
    return 0;
}