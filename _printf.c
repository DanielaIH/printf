#include "main.h"
/**
*_printf - function that prints output according to a format.
* @format: List of characters
*Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
va_list args;
va_start (args, format);

char_type chars [] = {
	{"c", p_char},
	{"s", p_string},
	{"d", p_decimal},
	{"i", p_integer},
	{NULL, NULL}
};

int  i = 0, j = 0, counter = 0;

while (format != NULL && format[i] != '\0')
	{
	if (format[i] == '%' && fotmat[i + 1] == '%')/*Evaluates %%*/
	{
		_putchar('%');
		i = i + 2;
		counter++;
	}

	else if (format[i] == '%')
	{
		j = 0;
		while (chars[j].letter != '\0')
		{
			if (chars[j].letter == format[i +1])
			{
				chars[i].func(args);
				counter += strlen(args);
			}
			j++;
		}//end while
	}//end else
	else /*Others chars in format*/
	{
		_putchar(format[i]);
		i++;
	}
	i++;
}/*End While*/

va_end(args);
_putchar('\n');
return (counter);
}
