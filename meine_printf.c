#include "main.h"
#include <string.h>

/**
 * _printf - produces output according to a format
 *
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;

	int h, count = 0;
	const char *elem = format;

	format_t data[] = {
		{"c", print_char},
		{"s", my_putstr},
		{"%", my_print_percent}
	};

	va_start(list, format);
	while (*elem)
	{
		if (*elem == '%')
		{
			elem++;
			for (h = 0; h < sizeof(data) / sizeof(data[0]); h++)
			{
				if (*elem == *(data[h].specifier))
				{
					data[h].print_fn(list);
					count++;
					break;
				}
			}
		}
		else
		{
			my_putchar(*elem);
			count++;
		}
		elem++;
	}
	va_end(list);
	return (count);
}	
