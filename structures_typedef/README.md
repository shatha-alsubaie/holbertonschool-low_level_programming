# C - Structures, typedef

Working with structures and `typedef` in C.

| File | Description |
|------|-------------|
| `dog.h` | Defines `struct dog` (name, age, owner), the `dog_t` typedef and all prototypes |
| `1-init_dog.c` | `void init_dog(struct dog *d, char *name, float age, char *owner);` initializes a dog |
| `2-print_dog.c` | `void print_dog(struct dog *d);` prints a dog (`(nil)` for NULL members) |
| `4-new_dog.c` | `dog_t *new_dog(char *name, float age, char *owner);` creates a new dog with copies of name and owner |
| `5-free_dog.c` | `void free_dog(dog_t *d);` frees a dog |

Compiled on Ubuntu 20.04 with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`.
