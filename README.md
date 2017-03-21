# 0x10. C - printf
## Carrie Ybay, Jennifer Huang
### _printf
A function that produces output according to a format

**Prototype:** `int _printf(const char *format, ...);`

Handles the following conversion specifiers:
- c - character
- s - string
- % - percentage sign
- d - decimal
- i - integer

***
##### holberton.h
defines prototypes and structs

##### util_functions.c
contains definitions for the following:
- _putchar: writes single character to stdout

##### print_functions.c
contains definitions for the following:
- p_char: _putchar single character
- p_str: _putchar string
- p_dec: _putchar decimal
- p_int: _putchar integer

##### _printf.c
definition for _printf which produces output according to a format