#ifndef MAIN_H_
#define MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct Node - Struct definition
 *
 * @s: Operator
 *
 */

typedef struct Node
{
	char *s;
	int (*f)(va_list arg);
} node;
int _printf(const char *format, ...);
int _putchar(char c);
int handle_s(va_list arg);
int handle_c(va_list arg);
int handle_p(va_list arg);
int handle_d(va_list arg);
int handle_b(va_list arg);
int handle_r(va_list arg);
#endif
