#include "main.h"

/**
 * check_specifier - checks for specifier
 * @val: argument
 * @format: pointer to char  in format
 * @buffer: the buffer
 *
 * Return: -1 on full buffer and number of char copied otherwise
 */

int check_specifier(va_list val, char *format, char *buffer)
{
	int g;
	int i;

	for (; g < sizeof(pairs) / sizeof(pairs[0]); g++)
	{
		if (*format == pairs[i].spec)
		{
			i = pairs[g].function(val);
			if (i == -1)
			{
				return (-1);
			}
		}
	}
	return (i);
}

/**
 * handle_char - handles character argument
 * @val: the list
 *
 * Return: one for char copied and -1 if buf is full
 */

int handle_char(va_list val)
{
	int i;
	int character = (int)va_arg(val, char);

	i = copy_to_buf(character);
	if (i == -1)
		return (-1);
	else
		return (1);
}

/**
 * handle_percent - handles percent argument
 * @val: the list
 *
 * Return: 1 on success -1 on failiure
 */

int handle_percent(va_list val)
{
	(void)val;
	int i;

	i = copy_to_buf('%');
	if (i == -1)
		return (-1);
	else
		return (1);
}

/**
 * handle_string - copies the string to buffer
 * @val: the list
 *
 * Return: number of char copied or -1 if buffer is full
 */

int handle_string(va_list val)
{
	char nil[] = "(nill)";
	int i;
	int count = 0;

	char *str = va_arg(val, char *);

	if (str == NULL)
		str = nil;
	for (; *str; str++)
	{
		i = copy_to_buf(*str);
		if (i == -1)
			return (-1);
		else
			count++;
	}
	return (count);
}
