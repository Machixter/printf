#include "main.h"
/**
 * print_octal - prints octal number
 * @val: argmt
 * Return: int
 */
int print_octal(va_list val)
{
	int x;
	int counter = 0;
	int *arr;
	unsigned int num, temp;

	num = va_arg(val, unsigned int);
	temp = num;
	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (x = counter - 1 ; x >= 0 ; x--)
	{
		arr[x] = temp % 8;
		temp /= 8;
	}
	for (x = counter - 1 ; x >= 0 ; x--)
	{
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (counter);
}
/**
 * print_hex - prints hexadecimal number
 * @val: argmt
 * Return: counter
 */
int print_hex(va_list val)
{
	int x;
	int counter = 0;
	int *arr;
	unsigned int num;
	unsigned int temp;

	num = va_arg(val, unsigned int);
	temp = num;
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));
	for (x = 0 ; x < counter ; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1 ; x >= 0 ; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 39;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (counter);
}
/**
 * print_hextra - prints hexadecimal number
 * @num: argmt
 * Return: counter
 */
int print_hextra(unsigned long int num)
{
	long int x;
	long int counter = 0;
	long int *arr;
	unsigned long int temp;

	temp = num;
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));
	for (x = 0 ; x < counter ; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1 ; x >= 0 ; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 39;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (counter);
}
/**
 * print_HEX - prints hexadecimal number
 * @val: argmt
 * Return: counter
 */
int print_HEX(va_list val)
{
	int x;
	int *arr;
	int counter = 0;
	unsigned int num;
	unsigned int temp;

	num = va_arg(val, unsigned int);
	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (x = 0; x < counter; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1 ; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 7;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (counter);
}
/**
 * print_HEXTRA - prints a hexadecimal number
 * @num: int to print
 * Return: counter
 */
int print_HEXTRA(unsigned int num)
{
	int x;
	int *arr;
	int counter = 0;
	unsigned int temp;

	temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (x = 0 ; x < counter; x++)
	{
		arr[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (arr[x] > 9)
			arr[x] = arr[x] + 7;
		_putchar(arr[x] + '0');
	}
	free(arr);
	return (counter);
}
