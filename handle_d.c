#include "main.h"
/**
 * check_num - case 0 and negative
 *
 * @num: receive num
 *
 * Return: count printed if exists
 */
int check_num(int num)
{
	int c;

	c = 0;
	if (num == 0)
	{
		_putchar('0');
		c += 1;
	} else if (num < 0)
	{
		_putchar('-');
		c += 1;
	}

	return (c);
}
/**
 * handle_long - long case
 *
 * @num: receive number
 *
 * Return: count numbers
 */

int handle_long(long num)
{
	long val, temp, copy_int, count, z, c;

	copy_int = num;
	count = 0;
	c = check_num(num);
	if (num < 0)
		num = -(long) num;

	while (copy_int != 0)
	{
		copy_int /= 10;
		count++;
	}
	z = 1;
	val = 1;
	while (z != count)
	{
		val *= 10;
		z++;
	}

	temp = num;
	while (val > 0)
	{
		temp = num / val;
		temp = temp % 10;
		val /= 10;
		temp = temp + '0';
		_putchar(temp);
	}
	count += c;
	return (count);
}


/**
 * handle_d - prints passed string as arg
 *
 * @arg: received argument
 *
 * Return: count of string passed
 */
int handle_d(va_list arg)
{
	int num, val, temp, count, z, c;
	long copy_int;

	num = va_arg(arg, int);
	if (num == INT_MIN)
	{
		count = handle_long(num);
		return (count);
	}
	copy_int = num;
	count = 0;
	c = check_num(num);
	if (num == 0)
		return (c);
	if (num < 0)
		num = -num;
	while (copy_int != 0)
	{
		copy_int /= 10;
		count++;
	}
	z = 1;
	val = 1;
	while (z != count)
	{
		val *= 10;
		z++;
	}
	temp = num;
	while (val > 0)
	{
		temp = num / val;
		temp = temp % 10;
		val /= 10;
		temp = temp + '0';
		_putchar(temp);
	}
	count += c;
	return (count);
}
