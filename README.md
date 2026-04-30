
<div align="center">
<a href="https://github.com/hadi14250">
    <img src="github_gifs/library.gif" alt="library looped gif" width="150" height="150">
  </a>
  <h3 align="center">Libft</h3>
  Build Your Own C Library
  <br>
</div>

# Libft

Libft is a personal reimplementation of core functions from the C standard library, written entirely from scratch. Starting with the basics of string handling and memory operations, the project gradually expands into more advanced utilities. The aim is to strengthen low-level C skills, get comfortable with manual memory management, and build a solid toolkit that can be reused in future projects.

<br>


## How to run
- Navigate to the project's root directory and edit `main.c` to call any function declared in `libft.h`
- From the root directory, run `make` to build the static library
- Compile your program with `gcc -Wall -Wextra -Werror libft.a`
- Execute the resulting binary with `./a.out`

<br>

## Functions and Descriptions

#### Character Manipulation:
| Function | Description |
| :- | :- |
| `ft_isalpha` | Checks whether a character is a letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is a letter or digit. |
| `ft_isascii` | Checks whether a character belongs to the ASCII set. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

#### String Manipulation:
| Function | Description |
| :- | :- |
| `ft_strlen`   | Returns the number of characters in a string. |
| `ft_strlcpy`  | Copies a string with a defined size limit. |
| `ft_strlcat`  | Appends one string to another with a defined size limit. |
| `ft_strchr`   | Returns a pointer to the first occurrence of a character in a string. |
| `ft_strrchr`  | Returns a pointer to the last occurrence of a character in a string. |
| `ft_strncmp`  | Compares two strings up to a given number of characters. |
| `ft_strnstr`  | Searches for a substring within a bounded portion of a string. |
| `ft_substr`   | Returns a newly allocated substring extracted from a given string. |
| `ft_strjoin`  | Returns a newly allocated string formed by joining two strings. |
| `ft_strtrim`  | Returns a string with specified characters removed from both ends. |
| `ft_split`    | Splits a string into an array of substrings using a delimiter. |
| `ft_strmapi`  | Returns a new string built by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string, with access to its index. |

#### Memory Manipulation:
| Function | Description |
| :- | :- |
| `ft_calloc`  | Allocates and zero-initializes a block of memory. |
| `ft_memset`  | Fills a memory block with a given byte value. |
| `ft_bzero`   | Sets a memory block to zero. |
| `ft_memcpy`  | Copies bytes from one memory area to another. |
| `ft_memmove` | Safely copies bytes between potentially overlapping memory areas. |
| `ft_memchr`  | Searches for a byte within a memory block. |
| `ft_memcmp`  | Compares two memory blocks byte by byte. |
| `ft_strdup`  | Returns a newly allocated copy of a given string. |

#### Number Manipulation:
| Function | Description |
| :- | :- |
| `ft_atoi` | Parses an ASCII string and returns its integer value. |
| `ft_itoa` | Returns a newly allocated ASCII representation of an integer. |

#### File Descriptor Functions:
| Function | Description |
| :- | :- |
| `ft_putchar_fd` | Writes a single character to a given file descriptor. |
| `ft_putstr_fd`  | Writes a string to a given file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a given file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a given file descriptor. |

## BONUS

#### Linked List Manipulation:

| Function | Description |
| :- | :- |
| `ft_lstnew`       | Allocates and returns a new list node. |
| `ft_lstadd_front` | Inserts a node at the head of the list. |
| `ft_lstadd_back`  | Appends a node to the tail of the list. |
| `ft_lstsize`      | Returns the total number of nodes in the list. |
| `ft_lstlast`      | Returns the last node of the list. |
| `ft_lstdelone`    | Frees a single list node and its content. |
| `ft_lstclear`     | Frees every node from a given starting point until the end. |
| `ft_lstiter`      | Applies a function to the content of every node in the list. |
| `ft_lstmap`       | Builds a new list by applying a function to each node's content. |

<br>
