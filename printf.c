#include "main.h"

/**
 * _printf - custom printf function
 * @format: the format string
 * @...: other arguments
 *
 * Return number of printed chars on succes
 */

int _printf(const char *format, ...)
{
	int i;
	int pc = 0;

	va_list argu;

	va_start(argu, format);

	for (; *format; format++)
	{
		if (*format != %)
		{
			copy_to_buf(*format);
			pc++;
		}
		else
		{
			format++;
			pc += chech_specifier;
		}
	}
	va_end(argu);
	return (pc);
}
