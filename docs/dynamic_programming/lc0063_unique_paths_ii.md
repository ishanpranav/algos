# Unique paths II

> You are given an $m\times n$ array $A[1,\dots,m][1,\dots,n]$ where
> $A[i][j]\in\{0,1\}$ for all $1\leq i\leq m$ and $1\leq j\leq n$. There is a
> robot initially located at the top right corner, $i=0,j=0$. The robot tries to
> move to bottom-right $i=m,j=n$. The robot can only move either down or right
> at any point in time. A path that the robot takes cannot include any $i,j$
> such that $A[i][j]=1$. Return the number of possible unique paths that the
> robot can take to reach the bottom-right corner.

**Algorithm.** UniquePathsWithObstacles $(n)$; returns the number of possible unique paths:

If $n=0$ or $m=0$, then return $0$.

If instead $n=1$ and $m=1$, then return $\lnot A[1][1]$.

Initialize two $n$-element arrays $S_0[1,\dots,n]$ and $S_1[1,\dots,n]$.

Let $S_0[1]=\lnot A[1][1]$.

For $j=2$ to $n$, assign $S_0[j]\leftarrow S_0[j-1]\land\lnot A[1][j]$.

For $i=2$ to $m$:

- assign $S_1[1]\leftarrow 0\text{ if }(A[i][1]=1)\text{ otherwise }S_0[1]$;
- for $j=2$ to $n$:
  - assign $S_1[j]\leftarrow 0\text{ if }(A[i][j]=1)\text{ otherwise }S_1[j-1]+S_0[j]$;
- swap the references $S_0$ and $S_1$.

Return $S_0[n]$.

[Go to implementation.](../../src/dynamic_programming/lc0063_unique_paths_ii.c)
