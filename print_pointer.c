#include "main.h"

/**
 * print_pointer - prints an hexdecimal number
 * @val: argmt
 * Return: counter
 */
int print_pointer(va_list val)
{
	void *z;
	char *s = "(nil)";
	long int i;
	int y;
	int x;

	z = va_arg(val, void*);
	if (z == NULL)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			_putchar(s[x]);
		}
		return (x);
	}

	i = (unsigned long int)z;
	_putchar('0');
	_putchar('x');
	y = print_hextra(i);
	return (y + 2);
}
