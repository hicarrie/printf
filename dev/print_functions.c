#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_char - prints character c
 * @arg: character to print
 */
void p_char(va_list arg)
{
        char *c;
	int len = _strlen((void *)arg);

	c = (malloc(sizeof(char) * len));

	_strcpy(c, (void *)arg);

        _putchar(c[0]);

	free(c);
}

/**
 * p_str - prints string s
 * @arg: string to print
 */
void p_str(va_list arg)
{
	unsigned int i;
	char *s;
	int len = _strlen((void *)arg);

	s = (malloc(sizeof(char) * len));

	_strcpy(s, (void *)arg);

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	free(s);
}

/**
 * p_perc - prints %
 * @arg: character to print
 */
void p_perc(va_list arg)
{
	unsigned int i;
	char *c;
	int len = _strlen((void *)arg);

	c = (malloc(sizeof(char) * len));

	_strcpy(c, (void *)arg);

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}

	free(c);
}
