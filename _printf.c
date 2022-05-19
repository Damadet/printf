#include <stdarg.h>
#include "main.h"

/* this function will the number of characters displayed
 */

int _printf(const char * const format, ...)
{
	va_list args;
	int i=0;
	int n_displayed =0;

	va_start(args, format);
	
	while (format[i] != "\0")
	{
		if (_putchar(format[i]) != -1);
		n_displayed +=1;
		i++
	}

	va_end(args);

	return(n_displayed);
}
