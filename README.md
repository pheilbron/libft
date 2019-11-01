# libft

### Table Of Contents
* [Objective](#objective)
* [Installation](#installation)
* [Usage](#usage)
* [Functions](#functions)
* [Future](#future)
* [Credits](#credits)

## Objective  
The goal of libft is to build a library for personal use throughout the 42 Curriculum, at first replicating many of the functions of the C Standard Library, and then accumulating additional functionality as needed.

#### About 42  
[42][42] is a free, non profit, project-based, peer-to-peer learning coding school. It originated in France and now has over 20 campuses all over the world. More information can be found [here][42] 

## Installation 
Clone this repository.
````
git clone https://github.com/pheilbron/libft.git
cd libft\
````
To create the archive, use
````
make && make clean
````

## Usage  
To use this library, include the appropriate header file in your programs.
When compiling with gcc, use the -L flag.
````
gcc [srcs] -L <libft path> -lft
````

## Functions
### Standard Library

| Function | Description |
| -------- | ----------- |
| [`int ft_atoi(const char *str)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_atoi.c)<br/>[`int ft_atoi_end(const char *str, int *pos)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_atoi_end.c)<br/>[`long long ft_atoll(const char *str)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_atoll.c)<br/>`#include "ft_stdlib.h"` | `ft_atoi`, `ft_atoi_end`, and `ft_atoll` all return numerical conversions on the ascii string `str`. Each function ignores the leading whitespace before accepting an optional, single sign, and then converting the remaining valid digit values until it reaches the first non-digit character. |
| [`void ft_bzero(void *s, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_bzero.c)<br/>`#include "ft_string.h"` | `ft_bzero` zeros out `n` bytes of memory starting from `s`. |
| [`int get_next_line(const int fd, char **line)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/get_next_line.c)<br/>`#include "ft_stdlib.h"` | `get_next_line` saves a pointer to the next unread line through the next newline character, exclusive, from file with file descriptor `fd` in `line`, returning a positive value if the file isn't fully read, `0` if the file has been completely read, and a negative number for all errors. |
| [`int ft_isalnum(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isalnum.c)<br/>[`int ft_isascii(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isascii.c)<br/>[`int ft_isdigit(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isdigit.c)<br/>[`int ft_isspace(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isspace.c)<br/>[`int ft_isalpha(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isalpha.c)<br/>[`int ft_isblank(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isblank.c)<br/>[`int ft_isprint(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isprint.c)<br/>`#include "ft_ctype.h"`| The `ft_is` functions return `1` if `c` meets the critera and `0` otherwise.|
| [`char *ft_itoa(int n)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_itoa.c)<br/>[`char *ft_lltoa(long long n)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_lltoa.c)<br/>[`char *ft_ulltoa_base(unsigned long long n, int base, int cap)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_ulltoa_base.c)<br/>`#include "ft_stdlib.h"` | `ft_itoa`, `ft_lltoa`, and `ft_ulltoa_base` all return the ascii equivalent of `n`. `ft_ulltoa_base` converts `n` to base `base`, using lowercase letters if `cap` is `0` and uppercase letters otherwise. |
| [`void *ft_memalloc(size_t size)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_memalloc.c)<br/>`#include "ft_stdlib.h"` | `ft_memalloc` returns a pointer to `size` bytes of zeroed out memory. |
| ft_memcpy, ft_memccpy | |
| ft_memchr
| ft_memcmp
| ft_memdel
| ft_memdup, ft_memndup
| ft_memmove
| ft_memset
| ft_strcat, ft_strlcat, ft_strncat
| ft_strchr, ft_strrchr
| ft_strclr
| ft_strcmp, ft_strncmp
| ft_strcpy, ft_strlcpy, ft_strncpy, ft_stpcpy, ft_stpncpy
| ft_strdel
| ft_strdup, ft_strndup
| ft_strequ, ft_strnequ
| ft_striter, ft_striteri
| ft_strjoin
| ft_strlen, ft_wstrlen
| ft_strmap, ft_strmapi
| ft_strsplit
| ft_strstr, ft_strnstr
| ft_strsub
| ft_strtrim
| ft_tolower, ft_toupper, ft_strcapitalize

### Standard I/O

ft_printf, ft_fprintf, ft_nsprintf, ft_sprintf
ft_putchar, ft_putchar_fd
ft_putendl, ft_putendl_fd
ft_putnbr, ft_putnbr_fd
ft_putstr, ft_putstr_fd

### Additional Data Types
#### Dynamic Strings

ft_dstr_add, ft_dstr_add_nc
ft_dstr_del
ft_dstr_dump
ft_dstr_fadd
ft_dstr_free
ft_dstr_init
ft_dstr_insert, ft_dstr_insert_nc
ft_dstr_new
ft_dstr_overwrite
ft_dstr_release
ft_dstr_resize

#### Lists
#### Queues
#### Red & Black Trees
#### Stacks
#### Vectors

## Future 
This library is updated from time to time as the needs of future 42 projects reveal themselves.

## Credits  
* [Michael Brave](https://www.github.com/michaelbrave/)

[42]: http://42.us.org "School 42"
