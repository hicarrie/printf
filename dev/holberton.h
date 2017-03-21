#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct print - struct for conversion specifiers
 * @print: struct print
 * @p: print function specified
 */
typedef struct print
{
	char *print;
	void (*p)();
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);

void p_char(va_list arg);
void p_str(va_list arg);
void p_perc(va_list arg);
void p_dec(va_list arg);
void p_int(va_list arg);

#endif /* HOLBERTON_H */
