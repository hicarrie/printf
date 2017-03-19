#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct conv - struct for conversion specifiers
 * @conv: struct conv
 * @c: conversion function specified
 */
typedef struct print
{
	char *print;
	void (*p)(va_list arg);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

void p_char(va_list arg);
void p_str(va_list arg);
void p_perc(va_list arg);

#endif /* HOLBERTON_H */
