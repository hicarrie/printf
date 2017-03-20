#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * p_char - prints character c
 * @arg: character to print
 * Return: void
 */
int p_char(va_list arg, unsigned int index, char *buffer)
{
	char c;

	c = va_arg(arg, int);

	buffer[index] = c;
	return (index);
}

/**
 * p_str - prints string s
 * @arg: string to print
 * Return: void
 */
int  p_str(va_list arg, unsigned int index, char *buffer)
{
	unsigned int i;
	char *s;

	s = va_arg(arg, char *);

	i = 0;
	while (s[i] != '\0')
	{
		buffer[index] = s[i];
		i++;
		index++;
	}
	return (index);
}

/**
 * p_perc - prints %
 * Return: void
 */

int p_perc(va_list arg, unsigned int index, char *buffer)
{
	char c = '%';

	c = va_arg(arg, int);
	buffer[index] = c;
	return (index);
}
