#include "main.h"

/**
 * print_sign - return 1 if n is greater than zero
 * 0 if n is zero else return -1
 * @n: veriable applicable to
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
