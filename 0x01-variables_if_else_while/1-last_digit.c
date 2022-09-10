#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * 	   and whether it is greater than 5, less than 6, or 0.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_max / 2;

	if ((n % 10) > 5)
	{
		printf("%s %d is %d and is", n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("0\n");
	}
	else 
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
