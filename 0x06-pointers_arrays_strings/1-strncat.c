#include "main.h"
/**
 * _strncpy - C function that copies a string, including the
 *	      terminating null byte, using at most an inputted number of bytes.
 *
 * If the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes.
 *
 * Works identically to the standard library function `strncpy`.
 *
 * @dest: buffer storing the string copy
 *
 * @src:the source string
 *
 * @n:max nummber of byte copied
 *
 * Return: returns
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
