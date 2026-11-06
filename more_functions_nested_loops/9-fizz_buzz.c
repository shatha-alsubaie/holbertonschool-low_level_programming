#include <stdio.h>

/**
 * main - Prints the FizzBuzz sequence from 1 to 100
 *
 * Return: 0 on success
 */
int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number > 1)
			putchar(' ');
		if (number % 15 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);
	}
	putchar('\n');
	return (0);
}
