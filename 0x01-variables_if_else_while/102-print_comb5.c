#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	int i2;
	int j2;
	int k2;

	while (i <= 98)
	{
		j = (i / 10 + '0');
		k = (i % 10 + '0');
		i2 = 0;
		while (i2 <= 99)
		{
			j2 = (i2 / 10 + '0');
			k2 = (i2 % 10 + '0');

			if (i < i2)
			{
				putchar(j);
				putchar(k);
				putchar(' ');
				putchar(j2);
				putchar(k2);

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i2++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
