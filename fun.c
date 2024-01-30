#include "main.h"

/**
 * check_specifier - checks for specifier
 * @val: argument
 * @o: pointer to char  in format
 * @buffer: the buffer
 *
 * Return: -1 on full buffer and number of char copied otherwise
 */

int check_specifier(va_list val, char *o, char *buffer)
{
	int g = 0;

	for (; g < sizeof(
