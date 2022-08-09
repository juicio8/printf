#include "main.h"
#include <stdarg.h>

/**
 * print_hexdec_lower - print hexadecimal number
 * @par: unsigned int
 *
 * Return: int
 */

int print_hexdec_lower(va_list par)
{
	unsigned int c = va_arg(par, unsigned int);
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));

	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 87 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}

/**
 * print_hexdec_upper - print hexdecimal number
 * @par: unsigned int
 *
 * Return: int
 */

int print_hexdec_upper(va_list par)
{
	unsigned int c = va_arg(par, unsigned int);
	int  i = 0, j, temp = 0;
	int arr[128];

	if (c == 0)
		return (_putchar('0'));


	while (c != 0)
	{
		temp = c % 16;
		if (temp < 10)
			arr[i] = 48 + temp;
		else
			arr[i] = 55 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);

	return (i);
}
