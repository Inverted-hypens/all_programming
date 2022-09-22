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

	for (counter < n / 2; counter++)
	{
		temp = a[counter];
		a[counter] = a[n];
		a[n--] = temp;
	}
}
