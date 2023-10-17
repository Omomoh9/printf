#include "main.h"
/**
 * print_n - prints (null)
 */
void print_n(void)
{
	char *n = "(null)";

	while (*n != '\0')
	{
		_putchar(*n);
		n++;
	}
}
/**
 * handle_s - prints passed string as arg
 *
 * @arg: received argument
 *
 * Return: count of string passed
 */
int handle_s(va_list arg)
{
	int count;
	char *str;

	str = va_arg(arg, char *);
	count = 0;
	if (str == NULL)
	{
		print_n();
		return (6);
	}

	while (*str != '\0')
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}

/**
 * handle_p - prints passed % as arg
 *
 * @arg: received argument
 *
 * Return: count which is one character passed
 *
 */

int handle_p(va_list arg)
{
	(void) arg;
	_putchar('%');

	return (1);
}
