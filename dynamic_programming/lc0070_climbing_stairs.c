int climbStairs(int n) 
{
    if (n < 0) { return 0; }

    int a[2] = { 1, 1 };
    
    for (int i = 2; i <= n; i++)
    {
        int b = a[0] + a[1];

        a[0] = a[1];
        a[1] = b;
    }

    return a[1];
}
