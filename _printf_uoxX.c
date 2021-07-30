#include "holberton.h"

/**
 * _print_unsignint - prints an hexgecimal number.
 * @ap: arguments.
 * Return: counter.
 */

int _print_unsignint(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);
	int num, last = n % 10, digit, checker = 1;
	int i = 1;

	n =  n / 10;
	num = n;

	if (last < 0)
	{
		num = -num;
		n = -n;
		last = -last;
		i++;
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
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}

/**
 * _print_oct - prints an octal number.
 * @ap: arguments.
 * Return: counter.
 */

int _print_oct(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * _print_hex - prints an hexadecimal number.
 * @ap: arguments.
 * Return: counter.
 */

int _print_hex(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/**
 * _print_heX - prints an hexdecimal number.
 * @ap: arguments.
 * Return: counter.
 */

int _print_heX(va_list ap)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
