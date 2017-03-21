#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed excluding null byte
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, j;

	print_t print[] = {
		{"c", p_char},
		{"s", p_str},
		{"%", p_perc},
		{"d", p_dec},
		{"i", p_int},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (print[j].p != NULL)
			{
				if (format[i + 1] == print[j].print[0])
				{
					print[j].p(arg);
					i++;
				}
				j++;
			}

		}
		else
			_putchar(format[i]);

		i++;
	}
	_putchar('\0');

	va_end(arg);

	return (i);
}
