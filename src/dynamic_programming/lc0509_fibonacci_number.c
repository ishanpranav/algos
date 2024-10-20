// Fibonacci number

int fib(int n)
{
    if (n < 0)
    { 
        if (n % 2 == 0) { return -fib(-n); }

        return fib(-n);
    }

    if (n < 2) { return n; }

    int f[2] = { 0, 1 };

    for (int i = 2; i <= n; i++)
    {
        int fi = f[0] + f[1];

        f[0] = f[1], f[1] = fi;
    }

    return f[1];
}
