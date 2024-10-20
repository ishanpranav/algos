// House robber

#define max(a, b) (((a) > (b)) ? (a) : (b))

int rob(int v[], int n)
{
    if (!v || !n) { return 0; }
    
    int a[3] = { 0, v[0] };

    for (int i = 2; i <= n; i++)
    {
        int ai = max(a[1], a[0] + v[i - 1]);

        a[0] = a[1];
        a[1] = ai;
    }

    return a[1];
}
