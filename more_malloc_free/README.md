# C - More malloc, free

Using `malloc`, `free` and `exit` in C.

| File | Prototype | Description |
|------|-----------|-------------|
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b);` | Allocates memory; exits with status 98 if malloc fails |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n);` | Concatenates `s1` and the first `n` bytes of `s2` |
| `2-calloc.c` | `void *_calloc(unsigned int nmemb, unsigned int size);` | Allocates zeroed memory for an array |
| `3-array_range.c` | `int *array_range(int min, int max);` | Creates an array of ints from `min` to `max` |

Compiled on Ubuntu 20.04 with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
