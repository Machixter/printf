#include "main.h"
/**
 * formater - analyze specifiers to format a string
 * @format: string formatted
 * @f_list: input
 * @arg_list: input
 * Return: number of printed characters
 */
int formater(const char *format, converter f_list[], va_list arg_list)
{
	int ind, r_val, printed_chars;
	char next_char;

	printed_chars = 0;
	for (ind = 0; format[ind] != '\0'; ind++)
	{
		if (format[ind] == '%')
			next_char = format[ind + 1];
			if (next_char != '\0' && strchr("cdis", next_char) != NULL)
				switch (next_char)
				{
					case 'c':
						r_val = print_char(arg_list);
						break;
					case 'd':
						r_val = print_dec(arg_list);
						break;
					case 'i':
						r_val = print_int(arg_list);
						break;
					case 's':
						r_val = print_str(arg_list);
						break;
				}
				if (r_val == -1)
					return (-1);
				printed_chars += r_val;
				ind++;
			else
				_putchar(format[ind]);
				if (next_char != '\0')
					_putchar(next_char);
					printed_chars += 2;
				else
					return (-1);
		else
			_putchar(format[ind]);
			printed_chars++;
	}
	return (printed_chars);
}
