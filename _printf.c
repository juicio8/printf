#include "main.h"

/**
 * _printf - A frunction that produces output according to a format
 * @format: a character string argument passed
 *
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
	int result = 0, a;
	va_list par;
	int (*func)(va_list);

	va_start(par, format);
	if (format == 0)
		return (-1);
	for (a = 0; format[a]; a++)
	{
		if (format[a] == '%')
		{
			a++;
			if (!(format[a]))
				return (-1);
			func = get_func(format[a]);
			if (func == 0)
			{
				_putchar('%');
				_putchar(format[a]);
				result += 2;
			}
			else
			{
				result += func(par);
			}
		}
		else
		{
			_putchar(format[a]);
			result++;
		}
	}
	va_end(par);
	return (result);
}
