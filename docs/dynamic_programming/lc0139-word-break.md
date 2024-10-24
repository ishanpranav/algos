# Word break

> Given a string $s$ and a set of strings $D$, determine whether $s$ can be
> segmented into a space-separated sequence of one or more strings in $D$.

**Algorithm.** WordBreak $(s,D)$; returns $1$ if $s$ can be segmented using the
strings in $D$; otherwise $0$:

Let $m\leftarrow|D|$.

Let $n\leftarrow\text{len}(s)$. Then $s=(s_1,\dots,s_n)$.

Zero-initialize an $(n+1)$-element binary array $P[0,\dots,n]$. Of course, $P[k]\in\{0,1\}$ for all $0\leq k\leq n$.

Assign $P[0]\leftarrow 1$.

For $k=1$ to $n$:

- for $i=k$ down to $0$:
  - if $P[i]=1$ and $(s_i,\dots,s_k)\in D$, then:
    - assign $P[k]\leftarrow 1$;
    - break: next $k$.

Return $P[n]$.

[Go to implementation.](../../src/dynamic_programming/lc0139_word_break.c)
