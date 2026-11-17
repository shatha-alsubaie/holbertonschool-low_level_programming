# C - malloc, free

Dynamic memory allocation in C using `malloc` and `free`.

| File | Prototype | Description |
|------|-----------|-------------|
| `0-create_array.c` | `char *create_array(unsigned int size, char c);` | Creates an array of chars filled with `c` |
| `1-strdup.c` | `char *_strdup(char *str);` | Returns a newly allocated copy of a string |
| `2-str_concat.c` | `char *str_concat(char *s1, char *s2);` | Concatenates two strings into new memory |
| `3-alloc_grid.c` | `int **alloc_grid(int width, int height);` | Allocates a 2D grid of ints set to 0 |
| `4-free_grid.c` | `void free_grid(int **grid, int height);` | Frees a grid made by `alloc_grid` |
| `100-argstostr.c` | `char *argstostr(int ac, char **av);` | Joins all arguments, each followed by `\n` |
| `101-strtow.c` | `char **strtow(char *str);` | Splits a string into an array of words |

Compiled on Ubuntu 20.04 with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
