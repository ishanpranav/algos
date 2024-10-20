# Climbing stairs

> You are climbing a staircase. It takes $n\in\mathbb{Z}$ steps to reach the
> top. Each time you either climb $1$ or $2$ steps. In how many distinct ways
> can you climb to the top?

**Algorithm.** ClimbStairs $(n)$; returns the number of distinct ways to climb:

If $n\leq 0$, return $0$.

Let $a_0\leftarrow 1$ and $a_1\leftarrow 1$.

For $i=2$ to $n$:

- let $a_i\leftarrow a_0+a_a$;
- assign $a_0\leftarrow a_1$;
- assign $a_1\leftarrow a_i$.

Return $a_1$.

[Go to implementation.](../../src/dynamic_programming/lc0070_climbing_stairs.c)
