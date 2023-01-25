#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
/**
  * struct print_functions - correct format specifier links to function
  * @ch: format specifier
  * @func: pointer to function
  */

typedef struct print_functions
{
	char ch;
	int (*func)(va_list args);
} print_functions;

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_char(va_list args);
int (*get_print_function(char format_specifier))(va_list);

#endif
