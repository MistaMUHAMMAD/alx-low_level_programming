#include <stdio.h>
#include <stdlib.h>
#include "3-cal.h"

/**
 * op_add - Adds two numbers @a and @b
 *
 * @a: A number
 * @b: A number
 *
 * Return: Sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference of two numbers
 *
 * @a: A number
 * @b: A number
 *
 * Return: Difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers @a and @b
 *
 * @a: A number
 * @b: A number
 *
 * Return: Product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 *
 * @a: A number
 * @b: A number
 *
 * Return: Result if the division of @a by @b without remainder
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Calculates the remainder of @a divided by @b
 *
 * @a: A number
 * @b: A number
 *
 * Return: Remainder of @a divided by @b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
