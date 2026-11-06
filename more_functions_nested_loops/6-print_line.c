#include "main.h"

/**
 * print_line - Draws a horizontal line
 * @n: Number of underscores to print
 */
void print_line(int n)
{
	int column;

	for (column = 0; column < n; column++)
		_putchar('_');
	_putchar('\n');
}
