#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct format_specifier
{
	char *specifier;
	int (*print_n)(va_list list);
}format_t;

int my_putchar(char a);
int my_putstr(va_list list);
int _printf(const char *format, ...);
void print_s(char *s);
void print_char(va_list list);
void my_atoi(int digit, char *str);
void my_print_percent(__attribute__((unused)) va_list list);

#endif
