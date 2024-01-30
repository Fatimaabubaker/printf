#include "main.h"

/**
 * copy_to_buf - copy char to buffer then write to stdout
 * @c: the char given
 *
 * Return: 1 on success
 */

int copy_to_buf(int c, char *buffer)
{
	static int b = 0;
	if (b >= 1024)
	{
		return (-1);
	}
	else
	{
		buffer[b++]= c;
	}
	return (1);
}
