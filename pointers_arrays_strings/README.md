## Project: C - Pointers, arrays and strings
### Authors: [@Ihansen225](https://www.github.com/Ihansen225)
Pointer creation and manipulation exercises.
### Tools used:
- [Vim editor for Linux](https://www.vim.org/)
- [Gcc compiler](https://gcc.gnu.org/) (using `-Wall -Werror -Wextra -pedantic -std=gnu89`)

### Learning objectives:
#### General
-   What are pointers and how to use them
-   What are arrays and how to use them
-   What are the differences between pointers and arrays
-   How to use strings and how to manipulate them
-   Scope of variables
-    What are pointers to pointers and how to use them
-   What are multidimensional arrays and how to use them
-   What are the most common C standard library functions to manipulate strings

### Project files:
| File                                                                                                                                                  | Description                                                                                                                             |
| ----------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------- |
| [0-memset.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/0-memset.c)                      | Write a function that fills memory with a constant byte.                                                                                |
| [0-reset\_to\_98.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/0-reset_to_98.c)          | Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.                                  |
| [0-strcat.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/0-strcat.c)                      | Write a function that concatenates two strings.                                                                                         |
| [1-memcpy.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/1-memcpy.c)                      | Write a function that copies memory area.                                                                                               |
| [1-strncat.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/1-strncat.c)                    | Write a function that concatenates two strings.                                                                                         |
| [1-swap.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/1-swap.c)                          | Write a function that swaps the values of two integers.                                                                                 |
| [2-strchr.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/2-strchr.c)                      | Write a function that locates a character in a string.                                                                                  |
| [2-strlen.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/2-strlen.c)                      | Write a function that returns the length of a string.                                                                                   |
| [2-strncpy.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/2-strncpy.c)                    | Write a function that copies a string.                                                                                                  |
| [3-puts.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/3-puts.c)                          | Write a function that prints a string, followed by a new line, to stdout.                                                               |
| [3-strcmp.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/3-strcmp.c)                      | Write a function that compares two strings.                                                                                             |
| [3-strspn.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/3-strspn.c)                      | Write a function that gets the length of a prefix substring.                                                                            |
| [4-print\_rev.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/4-print_rev.c)               | Write a function that prints a string, in reverse, followed by a new line.                                                              |
| [4-rev\_array.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/4-rev_array.c)               | Write a function that reverses the content of an array of integers.                                                                     |
| [4-strpbrk.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/4-strpbrk.c)                    | Write a function that searches a string for any of a set of bytes.                                                                      |
| [5-rev\_string.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/5-rev_string.c)             | Write a function that reverses a string.                                                                                                |
| [5-string\_toupper.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/5-string_toupper.c)     | Write a function that changes all lowercase letters of a string to uppercase.                                                           |
| [5-strstr.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/5-strstr.c)                      | Write a function that locates a substring.                                                                                              |
| [6-cap\_string.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/6-cap_string.c)             | Write a function that capitalizes all words of a string.                                                                                |
| [6-puts2.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/6-puts2.c)                        | Write a function that prints every other character of a string, starting with the first character, followed by a new line.              |
| [7-leet.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/7-leet.c)                          | Write a function that encodes a string into 1337.                                                                                       |
| [7-print\_chessboard.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/7-print_chessboard.c) | Write a function that prints the chessboard.                                                                                            |
| [7-puts\_half.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/7-puts_half.c)               | Write a function that prints half of a string, followed by a new line.                                                                  |
| [8-print\_array.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/8-print_array.c)           | Write a function that prints n elements of an array of integers, followed by a new line.                                                |
| [8-print\_diagsums.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/8-print_diagsums.c)     | Write a function that prints the sum of the two diagonals of a square matrix of integers.                                               |
| [9-strcpy.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/9-strcpy.c)                      | Write a function that copies the string pointed to by src, including the terminating null byte (\\0), to the buffer pointed to by dest. |
| [main.h](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/main.h)                              | Header file Header file necessary for project functions.                                                                                |
