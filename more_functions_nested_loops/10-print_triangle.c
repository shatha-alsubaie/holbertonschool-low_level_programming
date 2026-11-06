#include "main.h"

/**
 * print_triangle - Draws a right-aligned triangle
 * @size: Height and base width of the triangle
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size - row - 1; column++)
			_putchar(' ');
		for (column = 0; column <= row; column++)
			_putchar('#');
		_putchar('\n');
	}
}
