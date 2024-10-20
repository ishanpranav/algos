# Minimum path sum

> Given an $m\times n$ grid $A[1,\dots,m][1,\dots,n]$ where $A[i][j]\geq 0$ for
> all $1\leq i\leq m$ and $1\leq j\leq n$, find a path from the top left to the
> bottom right which minimizes the sum of all numbers along its path, and return
> the minimum sum. Note that you can only move down or right on each step.

**Algorithm.** MinPathSum$(A[1,\dots,m][1,\dots,n],m,n)$; returns the minimum
path sum:

If $n=0$ or $m=0$, then return $0$.

If $m=1$ or $n=1$, then return $A[1][1]$.

Initialize two $m$-element arrays $S_0[1,\dots m]$ and $S_1[1,\dots,m]$.

Let $S_0[1]=A[1][1]$.

For $i=2$ to $m$, assign $S_0[i]\leftarrow S_0[i-1]+A[i][1]$.

For $j=2$ to $n$:

- assign $S_1[1]\leftarrow S_0[1]+A[1][j]$;
- for $i=2$ to $m$: assign $S_1[i]\leftarrow\min(S_1[i-1],S_0[i])+A[i][j]$;
- swap the references $S_0$ and $S_1$.

Return $S_0[m]$.

[Go to implementation.](../../src/dynamic_programming/lc0064_minimum_path_sum.c)
