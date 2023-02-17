#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, n, m;

	for (l = 48; l <= 57; l++)
	{
		for (n = 48; n <= 57; n++)
		{
			for (m = 48; m <= 57; m++)
			{
				if ( m> n && n>l )
					{
						putchar(l);
						putchar(n);
						putchar(m);
							if (l != 55 || n != 56 || m != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
