#include "holberton.h"

/**
 * _print - a function that characters format.
 * @format: is a character string
 * @ap: argument
 *
 * Return: count
 */
int _print(const char *format, va_list ap)
{
	int count = 0;
	int i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += _putchar(format[i]);

			else
			{
				count += _print_id(format[i], ap);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	return (count);
}

/**
 * _print_id - a function that produces output according to a format.
 * @format: is a character string
 * @ap: argument
 *
 * Return: len
 */
int _print_id(char format, va_list ap)
{
	int i = 0, len = 0;

	idformat _types[] = {
		{"s", _print_string},
		{"c", _print_char},
		{"i", _print_integer_id},
		{"d", _print_integer_id},
		{NULL, NULL}
	};

	while (_types[i].id)
	{
		if (*_types[i].id == format)
			len = _types[i].f(ap);
		i++;
	}

	return (len);
}
