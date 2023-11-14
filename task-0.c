#include "main.h"
/**
 * print_char - prints a character
 * @val: argmt
 * Return: 0
 */
int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (0);
}
/**
 * print_37 - prints %
 * Return: 1
 */
int print_37(void)
{
	_putchar(37);
	return (1);
}
/**
 * strlen - gets len of str
 * @str: pointer to str
 * Return: x
 */
int _strlen(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
		return (x);
}
/**
 * strlen_count - strlen funct applied for const
 * @str: pionter to char
 * Return: x
 */
int strlen_count(const char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
		return (x);
}
/**
 * print_str - print a string
 * @val: argmt
 * Return: len of the str
 */
int print_str(va_list val)
{

	char *s;
	int x;
	int len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (x = 0 ; x < len ; x++)
			_putchar(s[x]);
		return (len);
	}
	else
	{
		len = strlen(s);
		for (x = 0 ; x < len ; x++)
		{
			_putchar(s[x]);
		}
		return (len);
	}
}
