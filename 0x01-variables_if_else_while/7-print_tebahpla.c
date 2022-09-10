#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rl;

	for (rl = 'z'; rl >= 'a'; rl--)
	{
		putchar(rl);
	}
	putchar ('\n');
	return (0);
