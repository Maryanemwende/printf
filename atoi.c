#include "main.h"

/**
 * my_atoi - changes to int to str
 * @num:value number
 * @str:string
 *
 * Return:void
 */

void my_atoi(int num, char *str)
{
	int elem = 0;
	
	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return;
	}
	if (num < 0)
	{
		num = -num;
		str[elem++] = '-';
	}
	int digit_copy = num;
	while (digit_copy > 0)
	{
		int digit = digit_copy % 10;
		str[elem++] = digit + '0';
		digit_copy /=10;
	}
	str[elem] = '\0';
	int length = elem;
	if (str[0] == '-')
	{
		elem = 1;
		length++;
	}
	for (; elem < length / 2; elem++)
	{
		char temp = str[elem];
		str[elem] = str[length - elem - 1];
		str[length - elem - 1] = temp;
	}
}
