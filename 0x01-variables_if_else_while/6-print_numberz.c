#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts,
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
