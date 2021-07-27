#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)(va_list ap);
} idformat;

int _printf(const char *format, ...);
int _print(const char *format, va_list ap);
int _print_id(char format, va_list ap);
int _print_string(va_list ap);
int _print_char(va_list ap);
int _print_integer_id(va_list ap);
int _strlen(char *s);
int _putchar(char c);

#endif /* HOLBERTON_H */
