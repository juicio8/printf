#include "main.h"
/**
 * print_s - prints a string.
 * @list: va_list pointing 
 */
void print_s(va_list list)
{
	char *str;
	int index;

	str = va_arg(list, char *);

	for (index = 0; str[index]; index++)
		write(1, str, 1);
}
