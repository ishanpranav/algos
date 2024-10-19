#include <stdlib.h>

int climbStairs(int n)
{
    if (n < 0) { return 0; }

    int* p = malloc((n + 1) * sizeof * p);

    p[0] = 1;
    p[1] = 1;
    
    for (int i = 2; i <= n; i++)
    {
        p[i] = p[i - 1] + p[i - 2];
    }

    int a = p[n];

    free(p);
    
    return a;
}
