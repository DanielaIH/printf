#include <stdio.h>
#include "main.h"
int main(void)
{
	int len;
	int len2;
	int caracter;
	char c = 'a';
	caracter = _printf("%c\n",c);
	len = _printf("les's try\n");
	len2 = printf("Hola Como estan todos\n");
	_printf("length: [%%] lest\n",len);
	_printf("length: [%i]\n",len2);
	_printf("length char: [%i]\n",caracter);
	return (0);
}
