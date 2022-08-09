#include "main.h"

/**
 * get_func - function to find a function pointer
 * @a: specifier to find the correct function
 *
 * Return: function pointer
 */
int(*get_func(const char a))(va_list)
{
	unsigned int x = 0;

	format_t structs_pr[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_integer},
		{'u', print_unint},
		{'x', print_hexdec_lower},
		{'X', print_hexdec_upper},
		{'o', print_octal},
		{'b', print_binary},
		{'p', print_pointer},
		{'r', print_rev},
		{'S', print_spec_chars},
		{'\0', NULL}
	};

	for (; structs_pr[x].spac; x++)
	{
		if (a == structs_pr[x].spac)
			return (structs_pr[x].f);
	}

	return (NULL);
}
