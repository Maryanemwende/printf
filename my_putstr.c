#include "main.h"

/**
 * my_putstr - prints a string
 * @str:string to be printed
 *
 * Return:a value
 */

int my_putstr(char *str)
{
	int elem = 0;
	int count = 0;

	if (str)
	{
		while (str[elem] != '\0')
		{
			my_putchar(str[elem]);
			count += 1;
			elem++;
		}
	}
	else if (str == NULL)
		return (NULL);

	return (count);
}

