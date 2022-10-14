#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n_bytes, i;
	int (*prog)(int, char **) = &main;

	if (argc == 2)
	{
		n_bytes = atoi(argv[1]);
		if (n_bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < n_bytes; i++)
			printf("%02x%c",
					(unsigned char)*((char *)prog + i), i < n_bytes - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
