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
	int (*p)();
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void print_buffer(char *);

int p_char(va_list arg, unsigned int index, char *buffer);
int p_str(va_list arg, unsigned int index, char *buffer);
int p_perc(va_list arg, unsigned int index, char *buffer);

#endif /* HOLBERTON_H */
