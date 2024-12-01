# get_next_line

## Objective
Implement a function `get_next_line` in C that reads a single line at a time from a file descriptor.

## Features
- **Line-by-line reading**: Returns one line with each function call, maintaining the remainder for future reads.
- **Dynamic memory management**: Handles lines of any size using buffers and dynamic allocation.
- **Customizable buffer size**: Allows specifying the buffer size at compile time.
- **Support for multiple file descriptors**: Manages simultaneous reads from different files or inputs.

## Learning Outcomes
- File I/O with system calls like `read`.
- Dynamic memory allocation using `malloc` and `free`.
- Efficient string operations and buffer management.
- Handling edge cases such as EOF and preventing memory leaks.

`get_next_line` is a key project to develop skills in file handling and memory management, providing insight into how low-level I/O operations work in C.
