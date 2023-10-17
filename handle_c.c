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
	char c;

	c = va_arg(arg, int);
	if (c < 32 || c > 126)
	{
		if (c == 10)
		{
			_putchar('\n');
			return (1);
		} else if (c == 0)
		{
			_putchar('\0');
			return (1);
		} else
			return (-1);
	}

	_putchar(c);
	return (1);
}
