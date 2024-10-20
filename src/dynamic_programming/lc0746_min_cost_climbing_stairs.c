// Min cost climbing stairs

#define min(a, b) (((a) < (b)) ? (a) : (b))

int minCostClimbingStairs(int c[], int n)
{
    if (!c) { return 0; }
    
    switch (n) 
    {
    case 0: return 0;
    case 1: return c[0];
    }

    int a[2] = { c[0], c[1] };

    for (int i = 2; i < n; i++)
    {
        int ai = c[i] + min(a[0], a[1]);

        a[0] = a[1], a[1] = ai;
    }
    
    return min(a[0], a[1]);
}
