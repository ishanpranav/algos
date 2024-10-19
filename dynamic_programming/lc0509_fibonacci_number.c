#include <stdlib.h>

int fib(int n)
{
    if (n < 0)
    { 
        if (n % 2 == 0) { return -fib(-n); }

        return fib(-n);
    }

    if (n < 2) { return n; }

    int* f = malloc((n + 1) * sizeof * f);

    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }

    int a = f[n];
    
    free(f);

    return a;
}
