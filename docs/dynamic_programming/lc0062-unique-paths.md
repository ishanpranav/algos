# Unique paths

> There is a robot on an $m\times n$ grid. The robot is initially located at the
> top-left corner and tries to move to the bottom-right corner. The robot can
> only move either down or right at any step. Given $m,n\in\mathbb{N}$, return
> the number of possible unique paths that the robot can take to reach the
> bottom-right corner.

**Algorithm.** UniquePaths $(m,n)$, return $\binom{(m - 1) + (n - 1)}{(n - 1)}$.

[Go to implementation.](../../src/dynamic_programming/lc0062_unique_paths.c)
