#include "holberton.h"

/**
 * _print_string - print a string.
 * @ap: argument.
 * Return: the length of the string.
 */

int _print_string(va_list ap)
{
	int i = 0, len;
	char *printS = va_arg(ap, char *);

	if (printS == NULL)
	{
		printS = "(null)";
		len = _strlen(printS);
		while (i < len)
		{
			_putchar(printS[i]);
			i++;
		}
		return (len);
	}
	else
	{
		len = _strlen(printS);
		while (i < len)
		{
			_putchar(printS[i]);
			i++;
		}
		return (len);
	}
}

/**
 * _print_char - print a character.
 * @ap: argument.
 * Return: the length of a character.
 */

int _print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
