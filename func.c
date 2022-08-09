#include "main.h"
#include <stdarg.h>

/**
 * print_c - function to print character
 * @par: characters to print
 *
 * Return: number of character or -1
 */

int print_c(va_list par)
{
	char character = va_arg(par, int);

	return (_putchar(character));
}

/**
 * print_s - function to print string
 * @par: string to print
 *
 * Return: number of characters to print
 */

int print_s(va_list par)
{
	int ct;
	char *str = va_arg(par, char *);

	if (str == NULL)
		str = "(null)";
	for (ct = 0; str[ct] != '\0'; ct++)
		_putchar(str[ct]);

	return (ct);
}

/**
 * print_percent - function to print %
 * @par: unused
 *
 * Return: always 1
 */

int print_percent(__attribute__((unused))va_list par)
{
	char b = '%';

	_putchar(b);

	return (1);
}

/**
 * print_integer - to print an integer
 * @par: integer to print
 *
 * Return: number of chars and digits printed
 */

int print_integer(va_list par)
{
	int b[10];
	int c, d, o, p, i;

	d = va_arg(par, int);
	i = 0;
	o = 1000000000;
	b[0] = d / o;

	for (c = 1; c < 10; c++)
	{
		o /= 10;
		b[c] = (d / o) % 10;
	}

	if (d < 0)
	{
		_putchar('-');
		i++;
		for (c = 0; c < 10; c++)
			b[c] *= -1;
	}

	for (c = 0, p = 0; c < 10; c++)
	{
		p += b[c];
		if (p != 0 || c == 9)
		{
			_putchar('0' + b[c]);
			i++;
		}
	}

	return (i);
}


/**
 * print_decimal - to print a decimal
 * @par: decimal to print
 *
 * Return: number of chars and digit printed
 */

int print_decimal(va_list par)
{
	int b[10];
	int c, d, o, p, i;

	d = va_arg(par, int);
	i =  0;
	o = 1000000000;
	b[0] = d / o;

	for (c = 1; c < 10; c++)
	{
		o /= 10;
		b[c] = (d / o) % 10;
	}

	if (d < 0)
	{
		_putchar('-');
		i++;
		for (c = 0; c < 10; c++)
			b[c] *= -1;
	}

	for (c = 0, p = 0; c < 10; c++)
	{
		p += b[c];
		if (p != 0 || c == 9)
		{
			_putchar('0' + b[c]);
			i++;
		}
	}
	return (i);
}
