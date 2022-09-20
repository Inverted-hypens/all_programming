#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random valid passwords
 *Return: 0 (on success).
 */
int main(void)
{
	int pass, int sum, int n;

	srand(time(NULL));
	sum = 0;

	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += (pass + '0');
		printf("%c", (pass + '0'));
	}
	n = 2772 - sum
	printf("%c", n + '0');

	return (0);
}
