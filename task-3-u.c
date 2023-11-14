#include "main.h"
/**
 * print_unsigned_int - prints integer
 * @args: argument
 * Return: int
 */
int print_unsigned_int(va_list args)
{
	unsigned int z;
	int x = 1;
	int lst, num, xp = 1, digit;

	z = va_arg(args, unsigned int);
	lst = z % 10;

	z = z / 10;
	num = z;
	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		z = -z;
		lst = -lst;
		x++;
	}
	if (num > 0)
	{
		while (num / 10 != '\0')
		{
			xp = xp * 10;
			num = num / 10;
		}
		num = z;
		while (xp > 0)
		{
			digit = num / xp;
			_putchar(digit + '0');
			num = num - (digit * xp);
			xp = xp / 10;
			x++;
		}
	}
	_putchar(lst + '0');
	return (x);
}
