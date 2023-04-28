#include "main.h"

/**
 * my_atoi - changes to int to str
 * @digit:value number
 * @str:string
 *
 * Return:void
 */

void my_atoi(int digit, char *str)
{
	int elem = 0;
	int value;
	char temp;
	int digit_copy, length;

	if (digit == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return;
	}
	if (digit < 0)
	{
		digit = -digit;
		str[elem++] = '-';
	}
	digit_copy = digit;
	while (digit_copy > 0)
	{
		value = digit_copy % 10;
		str[elem++] = value + '0';
		digit_copy /= 10;
	}
	str[elem] = '\0';
	length = elem;
	if (str[0] == '-')
	{
		elem = 1;
		length++;
	}
	for (; elem < length / 2; elem++)
	{
		temp = str[elem];
		str[elem] = str[length - elem - 1];
		str[length - elem - 1] = temp;
	}
}
