/**
* print_string - prints a string
* @valist: valist
*/

void p_string(va_list valist)
{
	char *c;
	int i;

	c = va_srg(valist, char *);
	if (c == NULL)
		c = "(null)";

	for (i = 0, *(c + i) != '\0'; i++)
	{
		_putchar(*(s + i));
	}

	return (c);
}
