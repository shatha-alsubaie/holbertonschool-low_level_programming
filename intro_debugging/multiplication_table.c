#include <stdio.h>

void print_table(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			if (col > 1)
				printf(" ");
			printf("%d", row * col);
		}
		printf("\n");
	}
}

int main(void)
{
	print_table(4);
	return 0;
}
