#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct specpair
{
	char spec;
	int (*function)(va_list val, buffer);
} specfunpair;

specfunpair pairs[] = {
	{'c', handle_char},
	{'s', handle_string},
	{'%', handle_percent},
	{'d', handle_dec},
	{'i', handle_int}
};

int _putchar(char c);

int _printf(const char *format, ...);


#endif
