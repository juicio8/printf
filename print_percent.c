#include "main.h"
/**
 * print_percent - Prints a %
 * @list: A va_list pointing to the % to print.
 * @buffer: A character buffer to store the character in.
 * Return: Always 1.
 */
int print_percent(va_list _attribute_((_unused_)) list, char *buffer)
{
	*buffer = '%';
	return (1);
}
