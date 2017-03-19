#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct conv - struct for conversion specifiers
 * @conv: struct conv
 * @c: conversion function specified
 */
typedef struct conv
{
	char *conv;
	void (*c)(va_list arg);
} conv_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

void conv_c(char c);
void conv_s(char *s);
void conv_perc (char c);

#endif /* HOLBERTON_H */
