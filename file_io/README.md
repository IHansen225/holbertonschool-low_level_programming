## Project: C - Bit manipulation
### Authors: [@Ihansen225](https://www.github.com/Ihansen225)
File input/output management via system calls.
### Tools used:
- [Vim editor for Linux](https://www.vim.org/)
- [Gcc compiler](https://gcc.gnu.org/) (using `-Wall -Werror -Wextra -pedantic -std=gnu89`)

### Learning objectives:
#### General
-   Look for the right source of information online
-   How to create, open, close, read and write files
-   What are file descriptors
-   What are the 3 standard file descriptors, what are their purpose and what are their `POSIX` names
-   How to use the I/O system calls `open`, `close`, `read` and `write`
-   What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`
-   What are file permissions, and how to set them when creating a file with the `open` system call
-   What is a system call
-   What is the difference between a function and a system call

### Project files:
| File                                                                                                                                          | Description                                                                         |
| --------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------- |
| [0-read\_textfile.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/file_io/0-read_textfile.c)               | Write a function that reads a text file and prints it to the POSIX standard output. |
| [1-create\_file.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/file_io/1-create_file.c)                   | Create a function that creates a file.                                              |
| [2-append\_text\_to\_file.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/file_io/2-append_text_to_file.c) | Write a function that appends text at the end of a file.                            |
| [3-cp.c](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/file_io/3-cp.c)                                      | Write a program that copies the content of a file to another file.                  |
| [main.h](https://github.com/IHansen225/holbertonschool-low_level_programming/blob/master/file_io/main.h)                                      | Header file.                                                                        |
