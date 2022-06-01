#include <stdio.h>
#include "main.h"

/**
* print_binary - prints the binary value of input int
* @i: iterates over the size of bytes (4 in this case)
* @j: iterates over the size of bits (8 in this case)
* @byte: value of each byte present
* @bit: value of each bit present
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
			printf("%hdd",bit);
		}
		printf(" ");
	}
	printf("\n");

	return ;
}
