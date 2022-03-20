#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * struct char_func - struct
 * @letter: letter means data type
 * @func: function to print
 */

typedef struct char_func
{
	char letter;
	void (*func)(va_list);
} char_type;

int _printf(const char *format, ...);

#endif
