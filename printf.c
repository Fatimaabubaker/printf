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

	char *buffer = (char *)malloc(1024);

	for (; *format; format++)
	{
		if (*format != %)
		{
			i = copy_to_buf(*format, buffer);
			if (i == -1)
				break;
			pc++;
		}
		else
		{
			format++;
			i = chech_specifier(va_list argu, format, buffer);
			if (i = -1)
			{
				break;
			}
			else
				pc += i;
		}
	}
	write(1, buffer, pc);
	free(buffer);
	va_end(argu);
	return (pc);
}
