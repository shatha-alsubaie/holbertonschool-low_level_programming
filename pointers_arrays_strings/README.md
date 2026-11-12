# C - Pointers, arrays and strings

Holberton School projects about pointers, arrays and strings in C.

| File | Prototype | Description |
| --- | --- | --- |
| `0-reset_to_98.c` | `void reset_to_98(int *n);` | Sets the pointed int to 98 |
| `1-swap.c` | `void swap_int(int *a, int *b);` | Swaps two integers |
| `2-strlen.c` | `int _strlen(char *s);` | Returns the length of a string |
| `3-puts.c` | `void _puts(char *str);` | Prints a string and a new line |
| `4-print_rev.c` | `void print_rev(char *s);` | Prints a string in reverse |
| `5-rev_string.c` | `void rev_string(char *s);` | Reverses a string in place |
| `6-puts2.c` | `void puts2(char *str);` | Prints every other character |
| `7-puts_half.c` | `void puts_half(char *str);` | Prints the second half of a string |
| `8-print_array.c` | `void print_array(int *a, int n);` | Prints n elements of an int array |
| `9-strcpy.c` | `char *_strcpy(char *dest, char *src);` | Copies a string |
| `100-atoi.c` | `int _atoi(char *s);` | Converts a string to an integer |
| `0-strcat.c` | `char *_strcat(char *dest, char *src);` | Concatenates two strings |
| `1-strncat.c` | `char *_strncat(char *dest, char *src, int n);` | Concatenates using at most n bytes |
| `2-strncpy.c` | `char *_strncpy(char *dest, char *src, int n);` | Copies at most n bytes of a string |
| `3-strcmp.c` | `int _strcmp(char *s1, char *s2);` | Compares two strings |
| `4-rev_array.c` | `void reverse_array(int *a, int n);` | Reverses an array of integers |
| `5-string_toupper.c` | `char *string_toupper(char *);` | Changes lowercase letters to uppercase |
| `6-cap_string.c` | `char *cap_string(char *);` | Capitalizes all words of a string |
| `7-leet.c` | `char *leet(char *);` | Encodes a string into 1337 |
| `0-memset.c` | `char *_memset(char *s, char b, unsigned int n);` | Fills memory with a constant byte |
| `1-memcpy.c` | `char *_memcpy(char *dest, char *src, unsigned int n);` | Copies a memory area |
| `2-strchr.c` | `char *_strchr(char *s, char c);` | Locates a character in a string |
| `3-strspn.c` | `unsigned int _strspn(char *s, char *accept);` | Gets the length of a prefix substring |
| `4-strpbrk.c` | `char *_strpbrk(char *s, char *accept);` | Searches a string for any of a set of bytes |
| `5-strstr.c` | `char *_strstr(char *haystack, char *needle);` | Locates a substring |
| `7-print_chessboard.c` | `void print_chessboard(char (*a)[8]);` | Prints the chessboard |
| `8-print_diagsums.c` | `void print_diagsums(int *a, int size);` | Prints the sums of the two diagonals of a matrix |

All prototypes are in `main.h`. Compiled on Ubuntu 20.04 with
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
