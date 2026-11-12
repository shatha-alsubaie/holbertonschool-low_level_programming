#include <stdio.h>

/**
 * print_menu - Display calculator options.
 */
void print_menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
}

/**
 * main - Run the calculator.
 *
 * Return: 0 on normal exit, 1 on invalid input.
 */
int main(void)
{
	int choice;
	double a, b, result;

	printf("Simple Calculator\n");

	while (1)
	{
		print_menu();

		if (scanf("%d", &choice) != 1)
		{
			printf("Error: invalid input\n");
			return (1);
		}

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice < 1 || choice > 4)
		{
			printf("Invalid choice\n");
			continue;
		}

		printf("A: ");
		if (scanf("%lf", &a) != 1)
		{
			printf("Error: invalid input\n");
			return (1);
		}

		printf("B: ");
		if (scanf("%lf", &b) != 1)
		{
			printf("Error: invalid input\n");
			return (1);
		}

		switch (choice)
		{
		case 1:
			result = a + b;
			break;
		case 2:
			result = a - b;
			break;
		case 3:
			result = a * b;
			break;
		case 4:
			if (b == 0)
			{
				printf("Error: division by zero\n");
				continue;
			}
			result = a / b;
			break;
		default:
			continue;
		}

		printf("Result: %.10g\n", result);
	}

	return (0);
}
