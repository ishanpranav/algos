#define max(a, b) (((a) > (b)) ? (a) : (b))

int rob(int v[], int n)
{
    switch (n)
    {
    case 0: return 0;
    case 1: return v[0];
    case 2: return max(v[0], v[1]);
    }

    int m[2] = { 0, v[0] };

    for (int i = 2; i <= n; i++)
    {
        int t = max(v[i - 1] + m[0], m[1]);

        m[0] = m[1];
        m[1] = t;
    }

    return m[1];
}
