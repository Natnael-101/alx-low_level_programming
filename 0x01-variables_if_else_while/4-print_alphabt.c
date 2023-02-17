#include <stdio.h>
/**
 * main - Prints the alphabet in lower case except the letters q and e.
 * Return: 0 on success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	putchar('\n');
	return (0);
}
