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
| [`int ft_atoi(const char *str)`](https://github.com/pheilbron/libft/src/stdlib/ft_atoi.c)<br/>[`int ft_atoi_end(const char *str, int *pos)`](https://github.com/pheilbron/libft/src/stdlib/ft_atoi_end.c)<br/>[`long long ft_atoll(const char *str)`](https://github.com/pheilbron/libft/src/stdlib/ft_atoll.c)<br/>`#include stdlib.h` | description |
ft_bzero
get_next_line
ft_isalnum, ft_isascii, ft_isdigit, ft_isspace, ft_isalpha, ft_isblank, ft_isprint
ft_itoa, ft_lltoa, ft_ulltoa_base
ft_memalloc
ft_memcpy, ft_memccpy
ft_memchr
ft_memcmp
ft_memdel
ft_memdup, ft_memndup
ft_memmove
ft_memset
ft_strcat, ft_strlcat, ft_strncat
ft_strchr, ft_strrchr
ft_strclr
ft_strcmp, ft_strncmp
ft_strcpy, ft_strlcpy, ft_strncpy, ft_stpcpy, ft_stpncpy
ft_strdel
ft_strdup, ft_strndup
ft_strequ, ft_strnequ
ft_striter, ft_striteri
ft_strjoin
ft_strlen, ft_wstrlen
ft_strmap, ft_strmapi
ft_strsplit
ft_strstr, ft_strnstr
ft_strsub
ft_strtrim
ft_tolower, ft_toupper, ft_strcapitalize

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
