#include "main.h"

/**
 * _strcat - concatenates n bytes from src string to dest string
 * src does not need to be null terminated if it contains n bytes or more
 * @dest: pointer to destination string (to append to src)
 * @src: pointer to source string (to which dest will be appended to)
 * @n: number of bytes to concatenate
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src, int n)
{
	int ld, sc; /*ld = length of dest and sc = counter for n bytes of src*/

	ld = 0;
	sc = 0;

	while (dest[ld] != '\0')
		ld++;

	while (j < n && src[sc] != '\0')
	{dest[ld] = src[sc];
		sc++, ld++;
	}

	dest[ld] = '\0';

	return (dest);
}
