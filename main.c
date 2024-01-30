#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char riri = 'r';
	char ro[] = "raya";

	printf("name %s da\n", ro);
	_printf("name %s da\n", ro);
	printf("init %c\n", riri);
	_printf("init %c\n", riri);
	printf(" my initial : %c and my name is %s\n", riri, ro);
	_printf(" my initial : %c and my name is %s\n", riri, ro);
}
