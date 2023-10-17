#include "main.h"
/**
 * handle_r - prints passed character as arg
 *
 * @arg: received argument
 *
 * Return: count which is one character passed
 */

int handle_r(va_list arg)
{
	char *s;
	int i, count;

	s = va_arg(arg, char *);
	i = count = 0;
	while (s[i] != '\0')
	{
		i++;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (count);
}

