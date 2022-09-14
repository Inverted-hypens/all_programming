#include "main.h"

/**
 * print_last_digit - prints the last digits of any number
 * @n: the int to be operated on
 * Return: the last digit of the int
 */
int print_last_digit(int n)
{
	if (n >= 0 && n <= 9)
		return (n);
	else
	{
	n = _abs(n % 10);
	return (n);
	}
}
