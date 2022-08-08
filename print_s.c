#include "main.h"
/**
 * print_s - prints a string.
 * @list: va_list pointing to the list
 * @buffer: A char buffer to store string
 * Return: no of char stored in buffer 
 */
int print_s(va_list list, char *buffer)
{
	char *str;
	char *null = "(null)";
	int i;

	str = va_arg(list, char *);
	if (str == NULL)
	{
		for (i = 0; *(str + 1); i++)
		{
			*buffer = *(str + i);
			buffer++;
		}
		return (6);
	}
	for (i = 0; *(str + i); i++)
	{
		*buffer = *(str + i);
		buffer++;
	}
	return (i);
}
