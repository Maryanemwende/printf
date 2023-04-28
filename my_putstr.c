#include "main.h"

/**
 * my_putstr - prints a string
 * @list: list of arguments
 *
 * Return: a string
 */

int my_putstr(va_list list)
{
	int elem = 0;
	char *str = va_arg(list, char *)

	if (str)
	{
		while (str[elem] != '\0')
		{
			my_putchar(str[elem]);
			count += 1;
			elem++;
		}
	}
	else
	{
		str = "(null)";
	}
	return (count);
}

