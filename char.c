#include "main.h"

/**
  * print_char - prints char
  * @args: va_list
  * Return: 1
  */

int print_char(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);

	return (1);
}
