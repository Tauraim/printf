#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: count
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list mylist;

	va_start(mylist, format);
	while (*format != '\0')
	{
		if (*format == '%' && *format + 1 != '\0')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(mylist, int));
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(mylist, char *);

				if (str != NULL)
					while (*str)
					{
						_putchar(*str++);
						count++;
					}
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
va_end(mylist);
return (count);
}
