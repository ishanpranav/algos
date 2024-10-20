# $n$-th Tribonacci number

> The Tribonacci sequence is defined

$$
\begin{align*}
T(n)=\begin{cases}
0,&n=0,\\
1,&n=1,\\
2,&n=1,\\
T(n-1)+T(n-2)+T(n-3),&n>2.
\end{cases}
\end{align*}
$$

**Algorithm.** Tribonacci $(n)$; returns $T(n)$:

If $n<1$, then return $0$.
If instead $n<3$, then return $1$.

Let $t_0=0$,$t_1=1$, and $t_2=2$.

For $i=3$ to $n$:

- let $t_i\leftarrow t_0+t_1+t_2$;
- assign $t_0\leftarrow t_1$, $t_1\leftarrow t_2$, and $t_2\leftarrow t_i$.

[Go to implementation.](../../src/dynamic_programming/lc1137_nth_tribonacci_number.c)
