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

	va_start(args, format);

	if (format == NULL)
	{
		return (0);
	}

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
				print_func(args);
			}

			format++;
		}

		_putchar(*format);
		format++;
	}

	va_end(args);

	return (0);
}

