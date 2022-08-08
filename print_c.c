#include "main.h"
/**
 * print_c - prints a character
 * @list: a va_list pointing to the list to print
 * @buffer: a char buffer to store chars in
 * Return: Always 1
 */

int print_c(va_list list, char *buffer)
{
	unsigned char ch;

	ch = va_arg(list, int);
	if (ch == '\0')
	{
		return (1);
	}
	*buffer = ch;
	return (1);
}
