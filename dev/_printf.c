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

	char *buffer;
	unsigned int index = 0;

	print_t print[] = {
		{"c", p_char},
		{"s", p_str},
		{"%", p_perc},
		{NULL, NULL}
	};

	va_start(arg, format);

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		free (buffer);
		return (0);
			}

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
					index = print[j].p(arg);
					i++;
				}
				j++;
			}
		}
		else
			buffer[index] = format[i];
		index++;
		i++;
	}

	print_buffer(buffer);

	va_end(arg);

	free (buffer);
	return (index);
}
