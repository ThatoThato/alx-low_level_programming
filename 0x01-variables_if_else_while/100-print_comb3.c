#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n = '0';
	int m = '0';

	for (m = '0'; m <= '0'; m++)
	{
		for (n = '0'; n <= '0'; n++)
		{
			if (!((n == m) || (m > n)))
			{
				putchar(m);
				putchar(n);
				if (!(n == '0' && m == '0'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

