#include "holberton.h"

/**
 ** _print_bin - Prints a int converted to binary
 ** @args: A list of variadic arguments
 **
 ** Return: The number of printed digits
 **/

int _print_bin(va_list args)
{
	unsigned int x = 0;
	int b = 0, new = 0;

	new = va_arg(args, int);
	x = new;
	if (new < 0)
	{
		_putchar('1');
		new = new * -1;
		x = new;
		b += 1;
	}
	while (x > 0)
	{
		x = x / 2;
		b++;
	}
	_recursion_bin(new);
	return (b);
}

/**
 * _recursion_bin - Prints a binary
 ** @a: integer to print
 **
 **/
void _recursion_bin(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		_recursion_bin(t / 2);
	_putchar(t % 2 + '0');
}
