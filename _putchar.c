#include <unistd.h>
#include "main.h"
/**
 * _buffer_to_write - Use a local buffer of 1024 chars in order to call write
 * @c: character
 * Return: Success 1
 */

int _buffer_to_write(char c)
{
	static char buffer[1024];
	static int i;

	if (i >= 1024 || c == -1)
	{
		_putchar(buffer);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}

/**
 * _putchar - write the character c
 * @c: character
 * Return: Success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
