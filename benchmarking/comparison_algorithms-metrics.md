# comparison_algorithms - Metrics

Compiled with:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long comparison_algorithms.c -o comparison_algorithms
```

## Raw output

### Run 1

```
Naive algorithm result: 625025000
Naive algorithm time: 2.746132 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000107 seconds
```

### Run 2

```
Naive algorithm result: 625025000
Naive algorithm time: 2.746291 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

### Run 3

```
Naive algorithm result: 625025000
Naive algorithm time: 2.743455 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000106 seconds
```

## Summary

| Run | Naive (s) | Single-pass (s) |
|-----|-----------|-----------------|
| 1 | 2.746132 | 0.000107 |
| 2 | 2.746291 | 0.000106 |
| 3 | 2.743455 | 0.000106 |
| **Average** | **2.745293** | **0.000106** |

## Relative difference

Average naive time / average single-pass time = 2.745293 / 0.000106333 = ~25,818

The naive implementation is ~25,800 times slower than the single-pass implementation.
