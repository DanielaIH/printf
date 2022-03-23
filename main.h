#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct char_func - struct
 * @letter: letter means data type
 * @func: function to print
 */

typedef struct char_func
{
	char *letter;
	int (*func)(va_list);
} char_type;

int _printf(const char *format, ...);
int p_string(va_list valist);
int p_decimal(va_list valist);
int p_integer(va_list valist);
int p_char(va_list valist);
int p_bin(va_list valist);
int p_oct(va_list valist);
int p_hex(va_list valist);
int p_hexMayus(va_list valist);
int _putchar(char c);

#endif
