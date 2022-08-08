#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _putchars - writes characters.
 * @c - character
 * Return - character
 */
int _putchars(char c)
{
	return (write (1, &c, 1));
}
/**
 * print_string - prints string
 * @s - array of characters
 */
void print_string(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		_putchars(s[i]);
		i++;
	}
}
int _printf(const char *format, ...)
{
	const char *traverse;
	unsigned int i;
	char *s;

	va_list arg;
	va_start(arg, format);

	for (traverse = format; *traverse != '\0'; traverse++)
	{
		while (*traverse != '%')
		{
			_putchars(*traverse);
			traverse++;
		}
		traverse++;

		if (*traverse == 'c')
		{
			i = va_arg(arg, int);
			_putchars(i);
		}
		else if (*traverse == 's')
		{
			s = va_arg(arg, char *);
			print_string(s);
		}

	}
	va_end(arg);
	return (0);
}
