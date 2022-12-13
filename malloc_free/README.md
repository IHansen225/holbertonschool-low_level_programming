## Project: C - malloc, free
### Authors: [@Ihansen225](https://www.github.com/Ihansen225)
Dynamic memory allocation and manipulation exercises.
### Tools used:
- [Vim editor for Linux](https://www.vim.org/)
- [Gcc compiler](https://gcc.gnu.org/) (using `-Wall -Werror -Wextra -pedantic -std=gnu89`)

### Learning objectives:
#### General
-   What is the difference between automatic and dynamic allocation
-   What is `malloc` and `free` and how to use them
-   Why and when use `malloc`
-   How to use `valgrind` to check for memory leak

### Project files:

| File                                                                                                                              | Description                                                                                                                             |
| --------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
| [0-create\_array.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/malloc_free/0-create_array.c) | Write a function that creates an array of chars, and initializes it with a specific char.                                               |
| [1-strdup.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/malloc_free/1-strdup.c)              | Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. |
| [2-str\_concat.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/malloc_free/2-str_concat.c)     | Write a function that concatenates two strings.                                                                                         |
| [3-alloc\_grid.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/malloc_free/3-alloc_grid.c)     | Write a function that returns a pointer to a 2 dimensional array of integers.                                                           |
| [4-free\_grid.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/malloc_free/4-free_grid.c)       | Write a function that frees a 2 dimensional grid previously created by your alloc\_grid function.                                       |
