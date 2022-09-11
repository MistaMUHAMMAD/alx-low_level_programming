#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *	  ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always (Success).
 */
int main(void)
{
	int n, m;

	for (n = 0; n <= 98; n++)
	{
		for (m = n + 1; m <= 99; m++)
		{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		putchar(' ');
		putchar((m / 10) + '0');

		putchar((num2 % 10) + '0');

		if (num1 == 98 && num2 == 99)
		continue;

		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
