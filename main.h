#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int my_putchar(char a);
int my_putstr(char *str);
int _printf(const char *format, ...);
void print_s(char *s);
void print_char(char c);
void my_atoi(int digit, char *str);

#endif
