#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)

_putchar('#');
}
_putchar('\n');
}
}
