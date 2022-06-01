#include <stdio.h>
#include "main.h"

/**
* print_binary - prints the binary value of input int
*@n: unsigned long integer input
* Return: bit value of input (0s and 1s)
*/

void print_binary(unsigned long int n)
{
	unsigned long int i, j;

	for (i = 0; i < sizeof(int); i++)
	{
		char byte = *(((char *)&n) + i);

		for (j = 8; j > 0; j++)
		{
			char bit = (byte >> j) & 1;

			printf("%hdd", bit);
		}
		printf(" ");
	}
	printf("\n");

	return;

}
