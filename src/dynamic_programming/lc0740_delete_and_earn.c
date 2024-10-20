// Delete and earn

#define W_MAX 10001
#define max(a, b) (((a) > (b)) ? (a) : (b))

int deleteAndEarn(int w[], int n)
{
    if (!w) { return 0; }

    switch (n)
    {
    case 0: return 0;
    case 1: return w[0];
    }

    int v[W_MAX + 1] = { 0 };

    for (int i = 0; i < n; i++) { v[w[i]] += w[i]; }

    int a[2] = { 0, v[0] };

    for (int i = 2; i <= W_MAX; i++)
    {
        int ai = max(a[0] + v[i - 1], a[1]);

        a[0] = a[1], a[1] = ai;
    }

    return a[1];
}
