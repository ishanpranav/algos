// Triangle

#define min(a, b) (((a) < (b)) ? (a) : (b))

int minimumTotal(int* a[], int m, int* n)
{
    if (!a || !m || !n || !n[m - 1]) { return 0; }
    if (n[m - 1] == 1) { return a[0][0]; }
    
    int* s = malloc(n[m - 1] * sizeof * s);

    for (int j = 0; j < n[m - 1]; j++) { s[j] = a[m - 1][j]; }

    for (int i = m - 2; i >= 0; i--)
    {
        for (int j = 0; j < n[i]; j++)
        {
            s[j] = min(s[j], s[j + 1]) + a[i][j];
        }
    }

    int r = s[0];

    free(s);

    return r;
}
