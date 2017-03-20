#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_char - prints character c
 * @arg: character to print
 * Return: void
 */
void p_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);

	_putchar(c);
}

/**
 * p_str - prints string s
 * @arg: string to print
 * Return: void
 */
void p_str(va_list arg)
{
	unsigned int i;
	char *s;

	s = va_arg(arg, char *);

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}

/**
 * p_perc - prints %
 * Return: void
 */
void p_perc(void)
{
	char c = '%';

	_putchar(c);
}
