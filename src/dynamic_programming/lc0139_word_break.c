// Word break

#include <limits.h>
#include <stdbool.h>
#include <string.h>

static bool set_contains_string(char* s, size_t n, char* d[], int m)
{
    for (int i = 0; i < m; i++)
    {
        if (strlen(d[i]) == n && memcmp(s, d[i], n) == 0)
        {
            return true;
        }
    }

    return false;
}

bool wordBreak(char* s, char* d[], int m)
{
    size_t n = strlen(s);
    bool* p = calloc(n + 1, sizeof * p);

    if (!p) { return false; }

    p[0] = true;

    for (size_t k = 1; k <= n; k++)
    {
        for (size_t i = k - 1; i != SIZE_MAX; i--)
        {
            if (p[i] && set_contains_string(s + i, k - i, d, m))
            {
                p[k] = true;

                break;
            }
        }
    }

    bool a = p[n];

    free(p);

    return a;
}
