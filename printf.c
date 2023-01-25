#include "main.h"

/**
  * _printf - prints formatted string to stdout
  * @format: string to print,
  * Return: number of chars printed
  */

int _printf(const char *format, ...)
{
	va_list args;
	int (*print_func)(va_list);
	int chars_printed = 0;

	va_start(args, format);

	if (format == NULL)
	{
		return (0);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (format[0] == '%' && !format[1])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
			} else
			{
				print_func = get_print_function(*format);
				chars_printed += print_func(args);
				--chars_printed;
			}

			format++;
		}
		_putchar(*format);
		format++;
		chars_printed++;
	}
	va_end(args);
	return (chars_printed);
}
