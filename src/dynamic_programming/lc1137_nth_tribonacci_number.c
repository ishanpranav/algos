// n-th Tribonacci number

int tribonacci(int n) 
{
    if (n < 1) { return 0; }
    if (n < 3) { return 1; }

    int t[3] = { 0, 1, 1 };
    
    for (int i = 3; i <= n; i++)
    {
        int ti = t[0] + t[1] + t[2];    
    
        t[0] = t[1], t[1] = t[2], t[2] = ti;
    }

    return t[2];
}
