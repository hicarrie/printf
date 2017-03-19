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
        _putchar(arg);
}

/**
 * p_str - prints string s
 * @arg: string to print
 */
void p_str(va_list arg)
{
	unsigned int i;

	i = 0;
	while (arg[i] != '\0')
	{
		_putchar(arg[i]);
		i++;
	}
}

/**
 * p_perc - prints %
 * @arg: character to print
 */
void p_perc(va_list arg)
{
	arg = '%';
	_putchar(arg);
}
