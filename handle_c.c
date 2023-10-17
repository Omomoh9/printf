#include "main.h"
/**
 * handle_c - prints passed character as arg
 *
 * @arg: argument received
 *
 * Return: count which is one character passed
 */

int handle_c(va_list arg)
{
	char a;

	a = va_arg(arg, int);
	if (a < 32 || a > 126)
	{
		if (a == 10)
		{
			_putchar('\n');
			return (1);
		} else if (a == 0)
		{
			_putchar('\0');
			return (1);
		} else
			return (-1);
	}

	_putchar(a);
	return (1);
}
