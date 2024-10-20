# House robber

> You are a professional robber planning to rob houses along a street. The only
> constraint stopping you from robbing each of them is that adjacent houses have
> security systems connected and it will automatically contact the police if two
> adjacent houses were broken into on the same night. Given an an array of house
> values $v[1,\dots,n]$ where $v[i]\in\mathbb{Z}$ for all $1\leq i\leq n$,
> return the maximum total value you can rob tonight without alerting the
> police.

**Algorithm.** Rob$(v[1,\dots,n],n)$; returns the maximum total value:

If $n=0$, then return $0$.

Let $a_0\leftarrow 1$ and $a_1\leftarrow 1$.

For $i=2$ to $n$:

- let $a_i\leftarrow\max(a_1,a_0+v[i])$;
- assign $a_0\leftarrow a_1$;
- assign $a_1\leftarrow a_i$.

Return $a_1$.

[Go to implementation.](../../src/dynamic_programming/lc0198_house_robber.c)
