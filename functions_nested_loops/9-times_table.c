#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9
 */
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			product = row * col;
			_putchar(',');
			_putchar(' ');
			if (product < 10)
				_putchar(' ');
			else
				_putchar('0' + product / 10);
			_putchar('0' + product % 10);
		}
		_putchar('\n');
	}
}
