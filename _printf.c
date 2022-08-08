#include "main.h"
/**
 * _printf - does things
 * @format: character string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int i, ret = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			i++;
			if (*(format + i) != '%')
			{
				converter(format + i)(args);
				continue;
			}
		}
		write(1, (format + i), 1);
		ret++;
	}
	return (0);
}
