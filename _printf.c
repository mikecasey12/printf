#include "holberton.h"

/**
 * _printf - function printf
 * @format: string with format to print
 *
 * Return: number of chars that print
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int len = 0;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	len = _print(format, ap);
	va_end(ap);

	return (len);
}
