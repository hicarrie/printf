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
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

void p_char(va_list arg);
void p_str(va_list arg);
void p_perc(void);

#endif /* HOLBERTON_H */
