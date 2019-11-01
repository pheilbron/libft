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
| [`int ft_atoi(const char *str)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_atoi.c)<br/>[`int ft_atoi_end(const char *str, int *pos)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_atoi_end.c)<br/>[`long long ft_atoll(const char *str)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_atoll.c)<br/><br/>`#include "ft_stdlib.h"` | `ft_atoi`, `ft_atoi_end`, and `ft_atoll` all return numerical conversions on the ascii string `str`. Each function ignores the leading whitespace before accepting an optional, single sign, and then converting the remaining valid digit values until it reaches the first non-digit character. |
| [`void ft_bzero(void *s, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_bzero.c)<br/><br/>`#include "ft_string.h"` | `ft_bzero` zeros out `n` bytes of memory starting from `s`. |
| [`int get_next_line(const int fd, char **line)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/get_next_line.c)<br/><br/>`#include "ft_stdlib.h"` | `get_next_line` saves a pointer to the next unread line through the next newline character, exclusive, from file with file descriptor `fd` in `line`, returning a positive value if the file isn't fully read, `0` if the file has been completely read, and a negative number for all errors. |
| [`int ft_isalnum(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isalnum.c)<br/>[`int ft_isascii(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isascii.c)<br/>[`int ft_isdigit(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isdigit.c)<br/>[`int ft_isspace(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isspace.c)<br/>[`int ft_isalpha(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isalpha.c)<br/>[`int ft_isblank(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isblank.c)<br/>[`int ft_isprint(int c)`](https://github.com/pheilbron/libft/blob/master/src/ctype/ft_isprint.c)<br/><br/>`#include "ft_ctype.h"`| The `ft_is` functions return `1` if `c` meets the critera and `0` otherwise.|
| [`char *ft_itoa(int n)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_itoa.c)<br/>[`char *ft_lltoa(long long n)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_lltoa.c)<br/>[`char *ft_ulltoa_base(unsigned long long n, int base, int cap)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_ulltoa_base.c)<br/><br/>`#include "ft_stdlib.h"` | `ft_itoa`, `ft_lltoa`, and `ft_ulltoa_base` all return the ascii equivalent of `n`. `ft_ulltoa_base` converts `n` to base `base`, using lowercase letters if `cap` is `0` and uppercase letters otherwise. |
| [`void *ft_memalloc(size_t size)`](https://github.com/pheilbron/libft/blob/master/src/stdlib/ft_memalloc.c)<br/><br/>`#include "ft_stdlib.h"` | `ft_memalloc` returns a pointer to `size` bytes of zeroed out memory. |
| [`void *ft_memcpy(void *dst, const void *src, size_t n`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memcpy.c)<br/>[ `void *ft_memccpy(void *dst, const void *src, int c, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memccpy.c)<br/><br/>`#include "ft_string.h" | |
| [`void *ft_memchr(const void *s, int c, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memchr.c)<br/><br/>`#include "ft_string.h" | |
| [`int ft_memcmp(const void *s1, const void *s2, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memcmp.c)<br/><br/>`#include "ft_string.h" | |
| [`void ft_memdel(void **ap)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memdel.c)<br/><br/>`#include "ft_string.h" | |
| [`void *ft_memdup(const void *src, size_t size)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memdup.c)<br/>[`void *ft_memndup(const void *src, size_t len, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memndup.c)<br/><br/>`#include "ft_string.h" | |
| [`void *ft_memmove(void *dst, const void *src, size_t len)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memmove.c)<br/><br/>`#include "ft_string.h" | |
| [`void *ft_memset(void *b, int c, size_t len)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_memset.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strcat(char *s1, char *s2)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strcat.c)<br/>[`size_t ft_strlcat(char *dst, const char *src, size_t dstsize)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strlcat.c)<br/>[`char *ft_strncat(char *s1, const char *s2, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strncat.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strchr(const char *s, int c)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strchr.c)<br/>[`char *ft_strrchr(const char *s, int c)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strrchr.c)<br/><br/>`#include "ft_string.h" | |
| [`void ft_strclr(char *s)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strclr.c)<br/><br/>`#include "ft_string.h" | |
| [`int ft_strcmp(const char *s1, const char *s2)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strcmp.c)<br/>[`int ft_strncmp(const char *s1, const char *s2, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strncmp.c)<br/>[`int ft_strcatcmp(const char *s1a, const char *s1b, const char *s2a, const char *s2b)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strcatcmp.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strcpy(char *dst, const char *src)(https://github.com/pheilbron/libft/blob/master/src/string/ft_strcpy.c)<br/>[`size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strlcpy.c)<br/>[`char *ft_strncpy(char *dst, const char *src, size_t len)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strncpy.c)<br/>[`char *ft_stpcpy(char *dst, const char *src)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_stpcpy.c)<br/>[`char *ft_stpncpy(char *dst, const char *src, size_t len)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_stpncpy.c)<br/><br/>`#include "ft_string.h" | |
| [`void ft_strdel(char **as)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strdel.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strdup(const char *s1)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strdup.c)<br/>[`char *ft_strndup(const char *s1, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strndup.c)<br/><br/>`#include "ft_string.h" | |
| [`int ft_strequ(char const *s1, char const *s2)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strequ.c)<br/>[`int ft_strnequ(char const *s1, char const *s2, size_t n)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strnequ.c)<br/><br/>`#include "ft_string.h" | |
| [`void ft_striter(char *s, void (*f)(char *))`](https://github.com/pheilbron/libft/blob/master/src/string/ft_striter.c)<br/>[`void ft_striteri(char *s, void (*f)(unsigned int, char *))`](https://github.com/pheilbron/libft/blob/master/src/string/ft_striteri.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strjoin(char const *s1, char const *s2)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strjoin.c)<br/><br/>`#include "ft_string.h" | |
| [`size_t ft_strlen(const char *s)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strlen.c)<br/>[`size_t ft_wstrlen(const wchar_t *s)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_wstrlen.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strmap(char const *s, char (*f)(char))`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strmap.c)<br/>[`char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strmapi.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strnew(size_t size)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strnew.c)<br/><br/>`#include "ft_string.h" | |
| [`char **ft_strsplit(char const *s, char c)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strsplit.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strstr(const char *haystack, const char *needle)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strstr.c)<br/>[`char *ft_strnstr(const char *haystack, const char *needle, size_t len)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strnstr.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strsub(char const *s, unsigned int start, size_t len)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strsub.c)<br/><br/>`#include "ft_string.h" | |
| [`char *ft_strtrim(char const *s)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strtrim.c)<br/><br/>`#include "ft_string.h" | |
| [`int ft_tolower(int c)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_tolower.c)<br/>[`int ft_toupper(int c)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_toupper.c)<br/>[`char *ft_strcapitalize(char *s)`](https://github.com/pheilbron/libft/blob/master/src/string/ft_strcapitalize.c)<br/><br/>`#include "ft_string.h" | |

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
