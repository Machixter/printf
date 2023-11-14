#include "main.h"
/**
 * print_exc_str - print exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_exc_str(va_list val)
{
	char *s;
	int x, len = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] < 32 || s[x] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[x];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEXTRA(value);
		}
		else
		{
			_putchar(s[x]);
			len++;
		}
	}
	return (len);
}
