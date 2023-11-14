#include "main.h"
/**
 * _printf - selects correct function to print
 * @format: identifier
 * Return: len of str
 */
int _printf(const char * const format, ...)
{
	converter z[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned_int}, {"%o", print_octal}, {"%x", print_hex},
		{"%X", print_HEX}, {"%S", print_exc_str}, {"%p", print_pointer}
	};
	va_list args;
	int x = 0, y = 0, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			while (y < sizeof(z) / sizeof(z[0]))
			{
				if (strcmp(z[y].format, format) == 0)
				{
					len += z[y].function(args);
					format += strlen(z[y].format);
					break;
				}
				y++;
			}
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	va_end(args);
	return (len);
}
