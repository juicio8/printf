#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int _printf(const char *format, ...);
/**
 * @letter: A conversion specifier
 * @f: A function pointer to a print function with a corresponding letter
 */
typedef struct formatter
{
	char * letter;
	int (*f)(va_list list, char *buffer);
} format_me;
int (*converter(const char *))(va_list list, char *buffer);
int print_c(va_list list, char *buffer);
int print_s(va_list list, char *buffer);
int print_d(va_list list, char *buffer);
int print_i(va_list list, char *buffer);
int print_percent(va_list list, char *buffer);

#endif
