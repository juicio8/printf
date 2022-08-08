#include "main.h"
/**
 * _printf - does things
 * @format: character string
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	int i, ret, len = 0, add = 1;
	va_list args;
	char *buffer, *buffer_ptr;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL || format == NULL)
		return (-1);
	buffer_ptr = buffer;

	va_start(args, format);
	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '\0')
			{
				ret = -1;
				break;
			}
			if (converter(format + i + 1))
			{
				i++;
				add = converter(format + i)(args, buffer);
				buffer += add;
				len += add;
				ret = len;
				continue;
			}
		}
		*buffer = *(format + i);
		len++;
		buffer++;
		ret = len;
	}
	*buffer = '\0';
	write(1, buffer_ptr, len);
	va_end(args);
	free(buffer_ptr);
	return (ret);
}
