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

	conv_t conv[] = {
		{"c", conv_c},
		{"s", conv_s},
		{"%", conv_spec},
		{NULL, NULL}
	};

	va_start(arg, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (conv[j].c != NULL)
			{
				if (format[i] == conv[j].c[0])
				{
					conv[j].c(arg);
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}

		i++;
	}

	va_end(arg);

	return(0); /* change to return number of printed characters */
}
