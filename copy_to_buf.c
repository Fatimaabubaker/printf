#include "main.h"

/**
 * copy_to_buf - copy char to buffer then write to stdout
 * @c: the char given
 *
 * Return: 1 on success
 */

int copy_to_buf(int c,)
{
	static int i;
	if (c == FLUSH || i >= 1024)
	{
		write(1; buffer; i);
		i = 0;
	}
	if (c != FLUSH)
	{
		buffer[i]= c;
	}
	return (1);
}
