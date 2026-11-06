#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: Input integer
 *
 * Return: Last digit of n
 */
int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit < 0)
		digit = -digit;
	_putchar('0' + digit);
	return (digit);
}
