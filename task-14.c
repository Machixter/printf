#include "main.h"
/**
 * print_rot13 - convert to rot13
 * @args: printf arguments
 * Return: counter
 *
 */
int print_rot13(va_list args)
{
	int x, y;
	int counter = 0;
	int z = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0 ; s[x] ; x++)
	{
		z = 0;
		for (y = 0; al[y] && !z ; y++)
		{
			if (s[x] == al[y])
			{
				_putchar(bl[y]);
				counter++;
				z = 1;
			}
		}
		if (!z)
		{
			_putchar(s[x]);
			counter++;
		}
	}
	return (counter);
}

