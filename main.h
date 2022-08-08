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
	void (*f)(va_list list);
} format_me;
void (*converter(const char *))(va_list list);
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);

#endif
