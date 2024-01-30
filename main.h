#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int handle_char(va_list val, char *buffer);
int handle_string(va_list val, char *buffer);
int handle_percent(va_list val, char *buffer);
int handle_dec(va_list val, char *buffer);
int handle_int(va_list val, char *buffer);
int check_specifier(va_list val, const char *format, char *buffer);
int copy_to_buf(int c, char *buffer);
int _printf(const char *format, ...);

typedef struct specpair
{
	char spec;
	int (*function)(va_list val, char *buffer);
} specfunpair;

specfunpair pairs[] = {
	{'c', handle_char},
	{'s', handle_string},
	{'%', handle_percent},
	{'d', handle_dec},
	{'i', handle_int}
};

#endif
