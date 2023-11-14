#include "main.h"
/**
 * print_int - prints int
 * @args: arguments
 * Return: int
 *
 */
int print_int(va_list args)
{
	int z;
	int x = 1;
	int lst, num, xp = 1, digit;

	z = va_arg(args, int);
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
/**
 * print_dec - prints decimal
 * @args: argumets
 * Return: dec
 */
int print_dec(va_list args)
{
	int z;
	int x = 1;
	int lst, num, xp = 1, digit;

	z = va_arg(args, int);
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
/**
 * print_bin - prints binary number
 * @val: function parameter
 * Return: integer
 */
int print_bin(va_list val)
{
	int count = 0;
	int x;
	int a = 1, b;
	int rem = 0;
	unsigned int num  = va_arg(val, unsigned int);
	unsigned int y;

	for (x = 0 ; x < 32 ; x++)
	{
		y = ((a << (31 - x)) & num);
		if (y  >> (31 - x))
			rem = 1;
		if (rem)
		{
			b = y >> (31 - x);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
