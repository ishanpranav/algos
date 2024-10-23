// Minimum falling path sum

#include <stdlib.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define swap(t, a, b) do { t c = a; a = b; b = c; } while (0);

int minFallingPathSum(int* a[], int n, int* p)
{
    if (!a || !n) { return 0; }

    int* s[2];
    
    s[0] = malloc(n * sizeof ** s);

    if (!s[0]) { return -1; }

    s[1] = malloc(n * sizeof ** s);

    if (!s[1])
    {
        free(s[0]);

        return -1;
    }

    for (int j = 0; j < n; j++) { s[0][j] = a[0][j]; }

    for (int i = 1; i < n; i++)
    {
        s[1][0] = min(s[0][0], s[0][1]) + a[i][0];

        for (int j = 1; j < n - 1; j++)
        {
            s[1][j] = min(min(s[0][j - 1], s[0][j]), s[0][j + 1]) + a[i][j];
        }

        s[1][n - 1] = min(s[0][n - 2], s[0][n - 1]) + a[i][n - 1];

        swap(int*, s[0], s[1]);
    }

    free(s[1]);

    int r = s[0][0];

    for (int j = 1; j < n; j++)
    {
        if (s[0][j] < r) { r = s[0][j]; }
    }

    free(s[0]);

    return r;
}
