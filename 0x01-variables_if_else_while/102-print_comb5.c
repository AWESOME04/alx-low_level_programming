#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0.
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 99; i++)
	{
		j = i % 10;
		k = i / 10;

		for (l = i; l <= 99; l++)
		{
			int m = l % 10;
			int n = 1 / 10;

			putchar(k + '0');
			putchar(j + '0');
			putchar(' ');
			putchar(n + '0');
			putchar(m + '0');

			if (i != 98 || l != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
