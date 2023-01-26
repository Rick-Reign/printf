#include "main.h"
#include <stdio.h>

/**
  * print - prints ints recusrivley
  * @n: argument to print
  * Return: void
  */

void print(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
	{
		print(n / 10);
	}
	_putchar((n % 10) + '0');
}

/**
  * total_digits - count number of digits
  * @n: integer param to count its digits
  * Return: integer
  */

int total_digits(int n)
{
	unsigned int count = 0;
	unsigned int x;

	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		x = n * -1;
	} else
	{
		x = n;
	}

	while (x != 0)
	{
		x /= 10;
		count++;
	}

	return (count);
}

/**
  * print_int - prints integers
  * @args: va_list
  * Return: number of printed ints
  */

int print_int(va_list args)
{
	int value = va_arg(args, int);
	unsigned int count = total_digits(value);

	print(value);

	if (value < 0)
	{
		count++;
	}

	return (count);

}
