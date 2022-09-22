#include "main.h"

/**
 * _strcat - concatenates two strings
 * overwrinting the terminating null byte(\0) at the end of dest string
 * and adds a terminating null byte.
 * @dest: pointer to destination string (to append to src)
 * @src: pointer to source string (to which dest will be appended to)
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int ld, ls; /*ld = length of dest and ls = lenght of src*/

	ld = 0;
	ls = 0;

	while (dest[ld] != '\0')
		ld++;

	while (src[ls] != '\0')
	{dest[ld] = src[ls];
		ls++, ld++;
	}

	dest[ld] = '\0';

	return (dest);
}
