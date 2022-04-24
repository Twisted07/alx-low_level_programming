#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Function begins
*
* Return: Success
*/

int main(void)
{
	char pin, e, q;

	e = 'e';
	q = 'q';

	for (pin = 'a'; pin <= 'z'; pin++)
	{
		if (pin != e && pin != q)
			putchar(pin);
	}

	putchar('\n');

	return (0);
}
