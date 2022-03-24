#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c
 * @c: character
 * Return: Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
