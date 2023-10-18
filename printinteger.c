#include "main.h"
/**
 * _printint -  function that prints integer
 * @va_list: list of arguments
 * @mylist: list name
 *
 * Return: Always 0 (success)
 */
int _printint(va_list mylist)
{
	int count = 0;
	int y = va_arg(mylist, int);

	if (y < 0)
	{
		count += _putchar('-');
		y = -y;
	}
	count += print_positiveint(y);
	return (count);
}
/**
 * print_positiveint - function that
 * prints integer
 * @y: integer to be printed
 *
 * Return: Always 0 (success)
 */
int print_positiveint(int y)
{
	int count = 0;

	if (y / 10)
		count += print_positiveint(y / 10);
	count += _putchar(y % 10 + '0');
	return (count);
}
