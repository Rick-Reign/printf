#include "main.h"
/**
  * get_print_function - gets corect print function
  * @format_specifier: character representing format to be applied
  * Return: pointer to function
  */

int (*get_print_function(char format_specifier))(va_list)
{
	print_functions function_arr[] = {
		{'s', print_string},
		{'c', print_char},
		{'i', print_int}
	};

	int total_specifiers = 3;
	int x;

	for (x = 0; x < total_specifiers; x++)
	{
		if (function_arr[x].ch == format_specifier)
		{
			return (function_arr[x].func);
		}
	}

	return (NULL);

}
