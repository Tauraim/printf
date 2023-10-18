#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
int _printint(va_list mylist);
int print_positiveint(int y);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
