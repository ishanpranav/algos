# Maximal square

> Given an $m\times n$ binary matrix $A[1,\dots,m][1,\dots,n]$, find the largest
> square of $1$ values and return its area.

**Algorithm.** MaximalSquare ($A[1,\dots,m][1,\dots,n],m,n$); returns the area
of the largest square containing only $1$ values:

If $m=0$ or $n=0$, then return $0$.

Initialize two $n$-element arrays $S_0[1,\dots n]$ and $S_1[1,\dots,n]$.

Let $r\leftarrow 0$.

For $j=1$ to $n$:

- $S_0[j]\leftarrow A[1][j]$;
- assign $r\leftarrow\max(r,S_0[j])$.

For $i=2$ to $m$:

- $S_1[1]\leftarrow A[i][1]$;
- assign $r\leftarrow\max(r,S_1[1])$;
- for $j=2$ to $n$:
  - assign $S_1[j]\leftarrow 0\text{ if }A[i][j]=0,\text{ otherwise }\min(S_0[j - 1], S_0[j], S_1[j - 1])+1$;
  - assign $r\leftarrow\min(r, S_1[j])$;
- swap the references $S_0$ and $S_1$.

Return $r^2$.

[Go to implementation.](../../src/dynamic_programming/lc0221_maximal_square.c)
