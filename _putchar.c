#include "main.h"
/**
 * _putchar - this print characters
 *
 * @c: character recevied
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
