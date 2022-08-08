#include "main.h"
/**
 * _printf - does things
 * @format: character string;
 * Return: 0
 */

int _print(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			converter(format + ++i)(args);
		}
		else
		{
			write(1, format + i, 1);
		}
	}
	return(0);
}
