#include "main.h"
/**
  * print_string - prints string
  * @args: va_list
  * Return: total chars printed
  */

int print_string(va_list args)
{
	int total_chars = 0;
	char *str = va_arg(args, char *);

	while (*str)
	{
		_putchar(*str);
		total_chars += 1;

		str++;
	}

	return (total_chars);
}
