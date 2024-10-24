// Maximal square

#include <stdlib.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define swap(t, a, b) do { t c = a; a = b; b = c; } while (0);

int maximalSquare(char* a[], int m, int* pn)
{
    if (!a || !m || !pn) { return 0; }

    int n = *pn;

    if (!n) { return 0; }
    
    int* s[2];

    s[0] = malloc(n * sizeof ** s);

    if (!s[0]) { return -1; }

    s[1] = malloc(n * sizeof ** s);

    if (!s[1])
    {
        free(s[1]);

        return -1;
    }

    int r = 0;

    for (int j = 0; j < n; j++)
    { 
        s[0][j] = a[0][j] - '0'; 
        
        if (s[0][j] > r) { r = s[0][j]; }
    }

    for (int i = 1; i < m; i++)
    {
        s[1][0] = a[i][0] - '0';

        if (s[1][0] > r) { r = s[1][0]; }

        for (int j = 1; j < n; j++) 
        {
            s[1][j] = a[i][j] == '0' 
                ? 0 
                : min(min(s[0][j - 1], s[0][j]), s[1][j - 1]) + 1;
        
            if (s[1][j] > r) { r = s[1][j]; }
        }

        swap(int*, s[0], s[1]);
    }

    free(s[0]), free(s[1]);

    return r * r;
}
