#include "main.h"

/**
 * _printf - produces output according to a format
 *
 * @format: character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	unsigned int elem, count = 0;
	char *str;

	va_start(args, format);
	while (format[elem])
	{
		if (format[elem] == '%')
		{
			format++;
			switch (format[elem])
			{
				case 'c':
					c = va_arg(args, int);
					print_char(c);
					break;
				case 's':
					str = va_arg(args, char *);
					print_s(str);
					if (str == NULL)
						my_putstr("(nil)");
					break;
				case '%':
					my_putchar('%');
					break;
			}
		}
		else
		{
			my_putchar(format[elem]);
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
