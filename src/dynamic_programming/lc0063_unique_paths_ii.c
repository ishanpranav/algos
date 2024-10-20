// Unique paths II

#include <stdbool.h>
#include <stdlib.h>
#define swap(t, a, b) do { t c = a; a = b; b = c; } while (0);

int uniquePathsWithObstacles(int* a[], int m, int* pn)
{
    if (!a || !m || !pn) { return 0; }

    int n = *pn;

    if (!n) { return 0; }
    if (m == 1 && n == 1) { return !a[0][0]; }

    int* s[2];
    
    s[0] = malloc(n * sizeof **s);
    
    if (!s[0]) { return -1; }

    s[1] = malloc(n * sizeof **s);

    if (!s[1]) 
    { 
        free(s[0]);
        
        return -1; 
    }

    s[0][0] = !a[0][0];

    for (int j = 1; j < n; j++) { s[0][j] = s[0][j - 1] && !a[0][j]; }

    for (int i = 1; i < m; i++)
    {
        s[1][0] = a[i][0] ? 0 : s[0][0];

        for (int j = 1; j < n; j++) 
        { 
            s[1][j] = a[i][j] ? 0 : s[1][j - 1] + s[0][j]; 
        }

        swap(int*, s[0], s[1]);
    }

    int r = s[0][n - 1];

    free(s[0]), free(s[1]);

    return r;
}
