// Minimum path sum

#include <stdlib.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define swap(t, a, b) do { t c = a; a = b; b = c; } while (0);

int minPathSum(int* a[], int m, int* pn) 
{
    if (!a || !m || !pn) { return 0; }

    int n = *pn;

    if (!n) { return 0; }
    if (m == 1 && n == 1) { return a[0][0]; }

    int* s[2];
    
    s[0] = malloc(m * sizeof **s);
    
    if (!s[0]) { return -1; }

    s[1] = malloc(m * sizeof **s);

    if (!s[1]) 
    { 
        free(s[0]);
        
        return -1; 
    }
    
    s[0][0] = a[0][0];

    for (int i = 1; i < m; i++) { s[0][i] = s[0][i - 1] + a[i][0]; }

    for (int j = 1; j < n; j++)
    {
        s[1][0] = s[0][0] + a[0][j];

        for (int i = 1; i < m; i++)
        {
            s[1][i] = min(s[1][i - 1], s[0][i]) + a[i][j];
        }

        swap(int*, s[0], s[1]);
    }

    int r = s[0][m - 1];

    free(s[0]), free(s[1]);

    return r;
}
