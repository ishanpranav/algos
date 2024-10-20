# Fibonacci number

> The Fibonacci numbers, commonly denoted $F(n)$ form a sequence, called the
> Fibonacci sequence, such that each number is the sum of the two preceding
> ones, starting from 0 and 1. That is,

$$
\begin{align*}
F(n)=\begin{cases}
0,&n=0,\\
1,&n=1,\\
F(n-1)+F(n-2),&n\neq 0\text{ and }n\neq 1.
\end{cases}
\end{align*}
$$

> It follows that:

$$F(-n)=(-1)^{n+1}F(n).$$

> Given $n$, calculate $F(n)$.

**Algorithm.** Fib $(n)$; returns $F(n)$:

If $n<0$, then:

- if $(n\mod 2)=0$, then return $(-1)~\times$ Fib $(-n)$;
- return Fib $(-n)$ otherwise.

If instead $n<2$, then return $n$.

Let $f_0\leftarrow 0$ and $f_1\leftarrow 1$.

For $i=2$ to $n$:

- let $f_i\leftarrow f_0+f_1$;
- assign $f_0\leftarrow f_1$ and $f_1\leftarrow f_i$.

Return $f_1$.

[Go to implementation.](../../src/dynamic_programming/lc0509_fibonacci_number.c)
