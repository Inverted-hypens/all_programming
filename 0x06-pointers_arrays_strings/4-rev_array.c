#include "main.h"
/**
 * reverse_array - revereses an array of integers
 * @a: pointer to array.
 * @n: number of elements of an array.
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;

<<<<<<< HEAD
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
=======
	for (counter < n / 2; counter++)
	{
		temp = a[counter];
		a[counter] = a[n];
>>>>>>> 96187cd512843f5358aacdadf343389c8b1956a8
		a[n--] = temp;
	}
}
