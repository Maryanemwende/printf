#include "main.h"

/**
 * my_putchar - writes a character to stdout
 * @a:character to be printed
 *
 * Return: 1(success), -1(otherwise)
 */

int my_putchar(char a)
{
	return (write(1, &a, 1));
}
