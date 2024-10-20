#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s)
{
    if (!s) { return s; }
    
    size_t n = strlen(s);

    if (!n) { return s; }

    size_t ai = 0, ak = 1;
    bool (*p)[n][n + 1] = calloc(n * (n + 1), sizeof(bool));

    for (size_t i = 0; i < n; i++) { (*p)[i][1] = true; }

    for (size_t i = 0; i < n - 1; i++)
    {
        if (s[i] != s[i + 1]) { continue; }
        
        (*p)[i][2] = true;
        ai = i, ak = 2;
    }

    for (size_t k = 3; k <= n; k++)
    {
        for (size_t i = 0; i < n - (k - 1); i++)
        {
            if (s[i] != s[i + (k - 1)] || !(*p)[i + 1][k - 2]) { continue; }

            (*p)[i][k] = true;

            if (k <= ak) { continue; }

            ai = i; ak = k;
        }
    }

    free(p);

    s[ai + ak] = '\0';

    return s + ai;
}
