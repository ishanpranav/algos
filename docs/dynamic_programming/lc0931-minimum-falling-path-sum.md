# Minimum falling path sum

> Given an $n\times n$ array $A[1,\dots,n][1,\dots,n]$, find a path from the top
> left to the bottom right which minimizes the sum of any falling path through
> $A$. A falling path starts at any element in the first row and chooses the
> element in the next row that is either directly below or diagonally left or
> diagonally right.

**Algorithm.** MinFallingPathSum $(A[1,\dots,n][1,\dots,n],n)$; returns the
minimum falling path sum:

If $n=0$ or $m=0$, then return $0$.

If instead $m=1$ and $n=1$, then return $A[1][1]$.

Initialize two $n$-element arrays $S_0[1,\dots n]$ and $S_1[1,\dots,n]$.

Let $S_0[1]=A[1][1]$.

For $j=2$ to $n$, assign $S_0[j]\leftarrow S_0[j-1]+A[1][j]$.

For $i=2$ to $m$:

- assign $S_1[1]\leftarrow S_0[1]+A[i][1]$;
- swap the references $S_0$ and $S_1$.

Return $S_0[n]$.

[Go to implementation.](../../src/dynamic_programming/lc0064_minimum_path_sum.c)
