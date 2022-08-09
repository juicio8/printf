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
		{"d", print_di},
		{"i", print_di},
		{"%", print_percent},
		{"u", print_u},
		{"x", print_x},
		{"X", print_X},
		{"o", print_o},
		{"r", print_rev},
		{"b", print_b},
		{"R", print_rot13},
		{"\0", NULL}
	};
	int i;

	for (i = 0; i < 12; i++)
	{
		if (*symbol == *(func[i].letter))
			return (func[i].f);
	}
	return (NULL);
}
