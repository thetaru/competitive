#include <stdio.h>

int main(void)
{
    int i, cnt = 0;
    char s[4];
    char buf[256];
    if (fgets(buf, sizeof(s), stdin) == NULL) {
        return 1;
    }
    if (sscanf(buf, "%s", s) != 1) {
        return 1;
    }

    for (i = 0; i < 3; i++) {
        if (s[i] == '1') {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}