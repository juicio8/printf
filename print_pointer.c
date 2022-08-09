#include "main.h"

/**
 * print_hex - to print address
 * @c: unsigned long int
 * @cap: int
 *
 * Return: no return
 */

int print_hex(unsigned long int c, int cap)
{
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
			arr[i] = cap ? 55 + temp : 87 + temp;
		c /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j]);
	return (i);
}

 /**
 * print_pointer - print an address (pointer)
 * @par: argument
 *
 * Return: hex
 */

int print_pointer(va_list par)
{
	void *b = va_arg(par, void*);
	long int cast;
	int a, c;
	char nl[] = "(nil)";

	if (!b)
	{
		for (c = 0; nl[c]; c++)
		_putchar(nl[c]);
		return (c);
	}

	cast = (unsigned long int)b;
	_putchar('0');
	_putchar('x');
	a = print_hex(cast, 0);
	return (a + 2);
}
