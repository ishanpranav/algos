#include <limits.h>
#include <stdlib.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

int minCostClimbingStairs(int c[], int n)
{
    switch (n) 
    {
    case 0: return 0;
    case 1: return c[0];
    case 2: return min(c[0], c[1]);
    }

    int m[2] = { c[0], c[1] };

    for (int i = 2; i < n; i++)
    {
        int t = c[i] + min(m[0], m[1]);

        m[0] = m[1];
        m[1] = t;
    }
    
    return min(m[0], m[1]);
}
