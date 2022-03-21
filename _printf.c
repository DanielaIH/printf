#include "main.h"
/**
*_printf - function that prints output according to a format.
* @format: List of characters
*Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int  i = 0, j = 0, counter = 0 ;
char_type chars[] = {
	{"c", p_char},
	{"s", p_string},
	{"d", p_decimal},
	{"i", p_integer},
	{NULL, NULL}};
va_start(args, format);
while (format != NULL && format[i] != '\0')
	{
	if (format[i] == '%' && format[i + 1] == '%')/*Evaluates %%*/
		_putchar('%'), i = i + 2, counter++;
	else if (format[i] == '%')
	{
		j = 0;
		while (chars[j].letter != NULL) /* Iterates through chars.letter */
		{
			if (chars[j].letter[0] == format[i + 1])
				counter += chars[i].func(args);
			j++;
		} /*end while*/
	} /*end else*/
	else /*Others chars in format*/
		_putchar(format[i]), counter++;
	i++; } /*End While*/
va_end(args);
return (counter);
}
