#include "main.h"
/**
 * converter - matches symbol with corresponding function
 * @symbol: conversion specifier
 * Return: function pointer to function matched by symbol
 */
int (*converter(const char *symbol))(va_list list, char *buffer)
{
	format_me func[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{"%", print_percent}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*symbol == *(func[i].letter))
			return (func[i].f);
	}
	return (NULL);
}
