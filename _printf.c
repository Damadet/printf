#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints formatted data to stdout
 * @format: string that contains the format to print
 * Return: number of characters written
 */


int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int k = 0;
	int n_displayed = 0;
	char *s = NULL;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			if (format[i + 1] == 'c')
			{
				_print_char(va_arg(args, int));
				n_displayed++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_args(args, char *);
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					n_displayed++;
					k++
				}
			}

			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				n_displayed++;
			}

		}

		i++;
	}
	va_end(args);
	return (n_displayed);

}
