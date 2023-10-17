#include "main.h"
/**
 * reverse - reverse numbers
 *
 * @binary_num: binary number received
 *
 * @h: size of array
 *
 * Return: array of binary number
 */
int *reverse(int binary_num[], int h)
{
	int a, i;
	static int reversed[150] = {0};

	i = 0;
	for (a = h; a >= 0; a--)
	{
		reversed[i]  = binary_num[a];
		i++;
	}
	return (reversed);
}
/**
 * convert_negative - convert binary to negative
 *
 * @binary_num: binary number received
 *
 * @h: size of array
 */
void convert_negative(int *binary_num, int h)
{
	int i, rem;

	rem = 1;
	for (i = 0; i <= h; i++) /* invert numbers */
	{
		if (binary_num[i] == 1)
			binary_num[i] = 0;
		else if (binary_num[i] == 0)
			binary_num[i] = 1;
	}

	for (i = h; i >= 0; i--) /* add one */
	{
		if (binary_num[i] + rem == 2)
		{
			binary_num[i] = 0;
			rem = 1;
		} else
		{
			binary_num[i] = binary_num[i] + rem;
			rem = 0;
		}
	}

	for (i = 0; i <= h; i++)
	{
		_putchar(binary_num[i] + '0');
	}
}

/**
 * handle_b - prints passed character as arguments
 *
 * @arg: received argument
 *
 * Return: count which is one character passed
 */
int handle_b(va_list arg)
{
	int x, num, num2, y, *reversed;
	char convert_string;
	int temp[150] = {0};

	num = num2 = va_arg(arg, int);
	if (num == 0)
	{
		_putchar(0 + '0');
		return (1);
	}
	if (num < 0)
		num = -(int)num;
	x = 0;
	while (num != 0)
	{
		if (num % 2 == 0)
		{
			temp[x] = 0;
		} else
		{
			temp[x] = 1;
		}
		num /= 2;
		x++;
	}
	x--;
	reversed = reverse(temp, x);
	if (num2 > 0)
	{
		for (y = 0; y <= x; y++)
		{
			convert_string  = reversed[y] + '0';
			_putchar(convert_string);
		}
	} else
	{
		convert_negative(reversed, x);
	}
	return (++x);
}
