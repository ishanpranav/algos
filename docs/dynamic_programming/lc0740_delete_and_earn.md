# Delete and earn

> You are given an an $n$-element array $W[1,\dots,n]$ where
> $1\leq W[i]\leq w^*$ for all $1\leq i\leq n$. You want to maximize the number
> of points you get by performing the following operation any number of times:
> Pick any $1\leq i\leq n$ and delete it to earn $w[i]$ points. Afterwards, you
> must delete every element equal to $W[i]-1$ and item $1\leq j\leq n$ where
> $W[j]=W[i]-1$ or $W[j]=W[i]+1$. Return the maximum number of points you can
> earn by applying the above operation some number of times.

**Algorithm.** DeleteAndEarn $(W[1,\dots,n],n)$; returns the maximum number of
points:

If $n=0$, then return $0$.

If instead $n=1$, then return $W[1]$.

Initialize an array $V[1,\dots,w^*]$ with $V[w]=0$ for all $1\leq w\leq w^*$.

For $i=1$ to $n$, assign $V[W[i]]\leftarrow V[W[i]]+W[i]$.

Let $a_0\leftarrow 0$ and $a_1\leftarrow V[1]$.

For $i=2$ to $w^*$:

- let $a_i\leftarrow\max(a_0+v[i],a_1)$;
- assign $a_0\leftarrow a_1$ and $a_1\leftarrow a_i$.

Return $a_1$.

[Go to implementation.](../../src/dynamic_programming/lc0740_delete_and_earn.c)
