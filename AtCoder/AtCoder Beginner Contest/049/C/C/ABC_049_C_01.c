#include <stdio.h>
#include <string.h>

char *TrimSuffix(char *str, char *word)
{
    int str_length = strlen(str);
    int word_length = strlen(word);
    char fetch_suffix_from_str[word_length+1];
    static char result[1024000];

    if (str_length < word_length) {
        return str;
    }

    strncpy(fetch_suffix_from_str, str + str_length - word_length, word_length);
    fetch_suffix_from_str[word_length] = '\0';

    if (strncmp(word, fetch_suffix_from_str, word_length) == 0) {
        strncpy(result, str, str_length - word_length);
        result[str_length - word_length] = '\0';
        return result;
    } else {
        return str;
    }
}

int main()
{
    char S[1024000];
    scanf("%s", S);

    const char *words[] = {
        "eraser",
        "erase",
        "dreamer",
        "dream",
        NULL,
    };

    int len_old, len_new;
    do {
        len_old = strlen(S);
        for (const char **p = words; *p; p++) {
            char *tmp = TrimSuffix(S, *p);
            strncpy(S, tmp, strlen(tmp));
            S[strlen(tmp)] = '\0';
        }
        len_new = strlen(S);
    } while (len_old - len_new);

    printf ((strlen(S) == 0) ? "YES" : "NO");
    return 0;
}