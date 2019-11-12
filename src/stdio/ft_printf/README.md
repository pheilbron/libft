# ft\_printf

### Table Of Contents
* [Usage](#usage)
* [Functions](#functions)


## Usage  
All of the `ft_printf` functions take a string `format`, followed by a series of arguments, process the format string, and either write the resulting string to out, file, or save the string in `str`. All `ft_printf` functions return the length of the string produced.

The format string is comprised two kinds of data; unformatted ascii characters, which are printed as they are entered, and formatted data introduced by '%' and follows the following format: <br/>
`...%[flags][field_width].[precision][length_specifier][conversion_type]...`
##### Flags
The following flags may be used in any combination.

| Flag | Description |
| ---- | ----------- |
| `+` | Include the sign (`+` or `-`) for all signed conversions. A `+` overrides a space if both are given |
| `-` | The conversion is left adjusted to the field width. A `-` overrides a `0` if both are given. |
| `#` | The conversion produces an alternate form.<br/><ul><li>for o, the conversion is ensured to be prefixed with a `0`</li><li>for x and X, a nonzero conversion is prefixed with `0x` and `0X`, respectively</li><li>for f and F, the result always contains a decimal point</li></ul> |
| `0` | The conversion is zero padded with zeros rather than blanks. If precision is given for a numeric conversion or the `-` flag also appears, the `0` is ignored. |
| ` ` (a space) | A blank should be left before a positive number (or empty string) produced by a sign conversion. If the `+` flag also appears, ` ` is ignored |

##### Field Width
An optional decimal value, specifying the minimum field width. If the conversion is shorter than the field width, then it will be padded to the left (or to the right, if `-` is given) with spaces (or with `0`s if the `0` flag is given). Otherwise, the field width is ignored.

##### Precision
An optional decimal value, preceded by a decimal point. 

##### Length Specifier

##### Conversion Type
| Conversion | Description |
| ---------- | ----------- |
| `b`, `B` | Binary<br>Description |
| `c`, `C` | Character<br>Description |
| `d`, `D`, `i`, `I` | Integer<br>Description |
| `f`, `F` | Floating Point<br>Description |
| `n` | Binary<br>Description |
| `o`, `O` | Octal<br>Description |
| `p`, `P` | Pointer<br>Description |
| `r` | Binary.<br>Description |
| `s` | String<br>Description |
| `u` | Unsigned Integer<br>Description |
| `x`, `X` | Hexadecimal<br>Description |
| `%` | Binary.<br>Description |

## Functions
| Function | Description |
| -------- | ----------- |
| [`int ft_printf(const char *format, ...)`](https://github.com/pheilbron/libft/blob/master/src/stdio/ft_printf/ft_printf.c) | Print converted format string to stdout. |
[`int ft_fprintf(int fd, const char *format, ...)`](https://github.com/pheilbron/libft/blob/master/src/stdio/ft_printf/ft_fprintf.c) | Write converted format string to file with file descriptor `fd`. |
[`int ft_nsprintf(char **str, const char *format, ...)`](https://github.com/pheilbron/libft/blob/master/src/stdio/ft_printf/ft_nsprintf.c) | Save converted format string in `str`. |
[`int ft_sprintf(char *str, const char *format, ...)`](https://github.com/pheilbron/libft/blob/master/src/stdio/ft_printf/ft_sprintf.c) | Copy converted format string to `str`. If converted string is larger than `str`, behavior is undefined. |
