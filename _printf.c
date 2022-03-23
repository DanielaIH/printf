#include "main.h"
/**
*_printf - function that prints output according to a format.
* @format: List of characters
*Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
va_list args;
int  i = 0, j = 0, counter = 0, b = 0;/*mira si entra en una funcion*/
char_type chars[] = {
	{"c", p_char}, {"s", p_string},	{"d", p_decimal},
	{"i", p_integer}, {"b", p_bin},	{NULL, NULL}};
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);
while (format != NULL && format[i] != '\0')
	{
	if (format[i] == '%' && format[i + 1] == '%')/*Evaluates %%*/
		_putchar('%'), i++, counter++;
	else if (format[i] == '%' && format[i + 1] != '%')
	{
		j = 0, b = 0;
		while (chars[j].letter != NULL) /*Iterates through chars.letter*/
		{
			if (format[i + 1] == chars[j].letter[0])
			{
				counter += chars[j].func(args), b = 1, i++;
				break;
			}
			j++;
		} /*end while*/
		if (b == 0)
			_putchar(format[i]), counter++;
	} /*end else*/
	else /*Others chars in format*/
		_putchar(format[i]), counter++;
	i++;
	} /*End While*/
va_end(args);
return (counter);
}
