#include "main.h"
/**
  * redirect - this check case and redirect
  * to corresponding function
  *
  * @c: character for case to check
  * ( c s d i % )
  *
  * Return: pointer to corresponding function
  */
int (*redirect(const char *c))(va_list arg)
{
	int val;
	node n[] = {
		{"s", handle_s},
		{"c", handle_c},
		{"%", handle_p},
		{"d", handle_d},
		{"i", handle_d},
		{"b", handle_b},
		{"r", handle_r},
		{NULL, NULL}
	};
	for (val = 0; val < 7; val++)
	{
		if (n[val].s[0] == c[1] && n[val].s != NULL)
		{
			return (n[val].f);
		}
	}

	return (NULL);
}
/**
  * format_checker - checks if format null
  *
  * @format: string passed first argument
  *
  * Return: 0 on success and -1 in case of error
  */

int format_checker(const char *format)
{
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	return (0);
}
/**
  * _printf - print all characters passed
  *
  * @format: string passed first argument
  *
  * if % is found we check character after %
  * and we store it in c and send it to
  * redirect
  *
  * Return: count
  */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*redirect_p)(va_list arg), count, error_checker, format_val, ch;

	format_val = format_checker(format);
	if (format_val == -1)
		return (-1);

	va_start(arg, format);
	count = ch = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == '\0')
			{
				format++;
				return (-1);
			}

			redirect_p = redirect(format);
			if (redirect_p != NULL)
			{
				error_checker = redirect_p(arg);
				if (error_checker == -1)
					return (-1);
				count += error_checker;
				format++;
				format++;
				ch = 1;
			}
		}
		if (*format == '\0' || (*format == '%' && ch == 1))
			continue;

		_putchar(*format);
		count++;
		format++;
	}
	va_end(arg);
	return (count);
}
