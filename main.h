#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
/**
 *
 * struct converter - structure for functions and symbols conversion
 * @sim: symbol
 * @function: related function
 */
typedef struct
{
	char* format;
	int (*function)(va_list);
}converter;


int _putchar(char);
int print_char(va_list val);
int print_37(void);
int _strlen(char *str);
int strlen_count(const char *str);
int print_str(va_list val);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_revs(va_list args);
int print_rot13(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_hextra(unsigned long int num);
int print_HEX(va_list val);
int print_HEXTRA(unsigned int num);
int _printf(const char * const format, ...);
int print_exc_str(va_list val);
int print_pointer(va_list val);



#endif
