# Word break

> Given a string $s$ and a set of strings $D$, determine whether $s$ can be
> segmented into a space-separated sequence of one or more strings in $D$.

**Algorithm.** WordBreak $(s,D)$; returns $\text{true}$ if $s$ can be segmented
using the strings in $D$; otherwise $\text{false}$:

Let $n\leftarrow\text{len}(s)$. If $n=0$, then return $\text{true}$.

Note $s=(s_1,\dots,s_n)$.

Let $m\leftarrow|D|$. If $m=0$, then return $\text{false}$.

Zero-initialize an $(n+1)$-element Boolean array $P[0,\dots,n]$ such that
$P[k]=\text{false}$ for all $0\leq k\leq n$.

Assign $P[0]\leftarrow\text{true}$.

For $k=1$ to $n$:

- for $i=k$ down to $0$:
  - if $P[i]=1$ and $(s_i,\dots,s_k)\in D$, then:
    - assign $P[k]\leftarrow\text{true}$;
    - break: next $k$.

Return $P[n]$.

[Go to implementation.](../../src/dynamic_programming/lc0139_word_break.c)
