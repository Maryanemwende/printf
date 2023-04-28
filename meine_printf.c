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
	for (elem = 0; format[elem] != '\0'; elem++)
	{
		if (format[elem] != '%')
			my_putchar(format[elem]);
		else
		{
			switch (format[++elem])
			{
				case 'c':
					my_putchar(va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					my_putstr(str);
					if (str == NULL)
						my_putstr("(nil)");
					break;
				case '%':
					my_putchar('%');
					break;
				default:
					continue;
			}
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
