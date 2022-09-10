#include <stdio.h>

/**
 * main function prints the letters of the alphabet in lowercase, and then uppercase.
 * this is followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	purchar('n\');
	return (0);
}
