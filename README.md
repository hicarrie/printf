# 0x10. C - printf
## Carrie Ybay, Jennifer Huang
### _printf
A function that produces output according to a format

**Prototype:** `int _printf(const char *format, ...);`

Handles the following conversion specifiers:
- **c** - character
- **s** - string
- **d** - decimal
- **i** - integer
- **%** - percentage sign

***
**holberton.h** - defines prototypes and structs

**util_functions.c** - contains definitions for the following:
- _putchar: writes single character to stdout

**print_functions.c** - contains definitions for the following:
- p_char: _putchar single character
- p_str: _putchar string
- p_dec: _putchar decimal
- p_int: _putchar integer

**_printf.c** - definition for _printf which produces output according to a format
***
### Usage
**Character:**
`_printf("%c\n", "H")`

**Output:**
`H`

.

**String:**
`_printf("%s\n", "Hello, World!")`

**Output:**
`Hello, World!`

.

**Decimal:**
`_printf("%d\n", "1024")`

**Output:**
`1024`

.

**Integer:**
`_printf("%i\n", "98")`

**Output:**
`98`