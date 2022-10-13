#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Print the opcodes of this program
 *
 * @a: addrrss of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0, i < n; i++)
	{
		printf("%.2hhx", a[i]);

		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
