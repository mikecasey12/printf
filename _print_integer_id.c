#include "holberton.h"

/**
 * _print_integer_id - a function that prints integers
 * @ap: argument
 *
 * Return: count
 */
int _print_integer_id(va_list ap)
{
	int n, num, digit, last, count = 1, checker = 1;

	n = va_arg(ap, int);
	last = n % 10;
	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar ('-');
		num = -num;
		n = -n;
		last = -last;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			checker = checker * 10;
			num = num / 10;
		}
		num = n;
		while (checker > 0)
		{
			digit = num / checker;
			_putchar(digit + '0');
			num = num - (digit * checker);
			checker = checker / 10;
			count++;
		}
	}
	_putchar(last + '0');

	return (count);
}
