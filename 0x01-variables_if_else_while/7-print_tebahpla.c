#include <stdio.h>

/**
 * main - Function to print the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);

	putchar('\n');

	return (0);
}
