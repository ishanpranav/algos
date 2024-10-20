# Min cost climbing stairs

> You are given an $n$-element array $C$ where $C[i]$ is the cost of the $i$-th
> step on a staircase. Once you pay the cost, you can either climb one or two
> steps. You can either start from step $i=0$ or step $i=1$. Return the minimum
> cost to reach the top floor.

**Algorithm.** MinCostClimbingStairs $(C[1,\dots,n], n)$; returns the minimum cost:

If $n=0$, then return $0$.

If instead $n=1$, then return $C[1]$.

Let $a_0\leftarrow C[1]$ and $a_1\leftarrow C[2]$.

For $i=2$ to $n$:

- let $a_i\leftarrow C[i]+\min(a_0,a_1)$;
- assign $a_0\leftarrow a_1$ and $a_1\leftarrow a_i$.

Return $\min(a_0,a_1)$.

[Go to implementation.](../../src/dynamic_programming/lc0746_min_cost_climbing_stairs.c)
