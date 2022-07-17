#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int size_of_array;
    int size_of_set;
    int *set;
} Set;

int InitSet(Set *s, int size_of_array)
{
    s->size_of_array = 0;
    s->size_of_set = 0;
    if ((s->set = (int*)calloc(size_of_array, sizeof(int))) == NULL) {
        s->size_of_array = 0;
        return -1;
    }
    s->size_of_array = size_of_array;
    return 0;
}

int FreeSet(Set *s)
{
    if (s->set != NULL) {
        free(s->set);
        s->size_of_array = 0;
        s->size_of_set = 0;
    }

    return 0;
}

int IsElementInSet(const Set *s, int n)
{
    for (int i = 0; i < s->size_of_set; i++) {
        if (s->set[i] == n) {
            return i;
        }
    }
    return -1;
}

int InsertElementInSet(Set *s, int n)
{
    if (s->size_of_set < s->size_of_array && IsElementInSet(s, n) == -1) {
        s->set[s->size_of_set++] = n;
    }

    return 0;
}

int main(void)
{
    int N;
    scanf("%d", &N);
    int d[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &d[i]);
    }

    Set s;
    if (InitSet(&s, N) == -1) {
        return 1;
    }

    for (int i = 0; i < N; i++) {
        InsertElementInSet(&s, d[i]);
    }

    printf("%d\n", s.size_of_set);

    FreeSet(&s);
    return 0;
}