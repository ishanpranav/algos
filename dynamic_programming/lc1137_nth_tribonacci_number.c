#include <stdlib.h>

int tribonacci(int n) 
{
    if (n < 1) { return 0; }
    if (n < 3) { return 1; }

    int* t = malloc((n + 1) * sizeof * t);

    t[0] = 0, t[1] = 1, t[2] = 1;

    for (int i = 3; i <= n; i++)
    {
        t[i] = t[i - 3] + t[i - 2] + t[i - 1];
    }

    int a = t[n];

    free(t);

    return a;
}
