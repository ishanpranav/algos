# Minimum path sum

> Given an $m\times n$ grid $A[1,\dots,m][1,\dots,n]$ where $A[i][j]\geq 0$ for
> all $1\leq i\leq m$ and $1\leq j\leq n$, find a path from the top left to the
> bottom right which minimizes the sum of all numbers along its path, and return
> the minimum sum. Note that you can only move down or right on each step.

**Algorithm.** MinPathSum $(A[1,\dots,m][1,\dots,n],m,n)$; returns the minimum
path sum:

If $n=0$ or $m=0$, then return $0$.

If instead $m=1$ and $n=1$, then return $A[1][1]$.

Initialize two $n$-element arrays $S_0[1,\dots n]$ and $S_1[1,\dots,n]$.

Let $S_0[1]=A[1][1]$.

For $j=2$ to $n$, assign $S_0[j]\leftarrow S_0[j-1]+A[1][j]$.

For $i=2$ to $m$:

- assign $S_1[1]\leftarrow S_0[1]+A[i][1]$;
- for $j=2$ to $n$: assign $S_1[j]\leftarrow\min(S_1[j-1],S_0[j])+A[i][j]$;
- swap the references $S_0$ and $S_1$.

Return $S_0[n]$.

[Go to implementation.](../../src/dynamic_programming/lc0064_minimum_path_sum.c)
