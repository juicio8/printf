#include "main.h"
/**
 * print_s - prints a string.
 * @list: va_list pointing 
 */
void print_s(va_list list)
{
	char *str;
	int i;

	str = va_arg(list, char *);

	for (i = 0; *(str + 1); i++)
		write(1, (str + i), 1);
}
