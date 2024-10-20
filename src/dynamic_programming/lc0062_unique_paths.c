// Unique paths

long long binomial(int n, int k)
{
    if (k > n - k)
    {
        k = n - k;
    }

    long long a = 1;

    for (int i = 0; i < k; i++)
    {
        a = (a * (n - i)) / (i + 1);
    }

    return a;
}

int uniquePaths(int m, int n) { return binomial((m - 1) + (n - 1), n - 1); }
