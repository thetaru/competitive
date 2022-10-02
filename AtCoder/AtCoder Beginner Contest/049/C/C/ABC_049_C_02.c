#include <stdio.h>
#include <regex.h>

int main()
{
    char str[1024000];
    scanf("%s", str);

    const char regex[] = "^(dream|dreamer|erase|eraser)*$";
    regex_t regexBuffer;

    if (regcomp(&regexBuffer, regex, REG_EXTENDED | REG_NEWLINE) != 0) {
        return -1;
    }

    if (regexec(&regexBuffer, str, 0, NULL, 0) == 0) {
        printf("YES");
    } else {
        printf("NO");
    }

    regfree(&regexBuffer);
    return 0;
}