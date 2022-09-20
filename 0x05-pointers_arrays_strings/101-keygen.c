#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random valid passwords
 *Return: 0 (on success).
 */
int main(void)
{
	int pass[100];
	int sum;

	sum = 0;

	srand(time(NULL));

	while (sum <= 100)
	{
		pass = (rand() % 78);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);

	return (0);
}
