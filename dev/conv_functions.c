#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * conv_c - converts and prints c
 */
void conv_c(char c)
{
        _putchar(c);
}

/**
 * conv_s - converts and prints s
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
