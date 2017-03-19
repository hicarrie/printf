#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * conv_c - converts and prints c
 * @c: character to print
 */
void conv_c(char c)
{
        _putchar(c);
}

/**
 * conv_s - converts and prints s
 * @s: string to print
 */
void conv_s(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * conv_perc - prints %
 * @c: character to print
 */
void conv_perc(char c)
{
	_putchar('%');
}
