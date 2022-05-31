#include <stdio.h>
/**
* Binary_to_uint - converts binary to unsigned interger
* @b: is a pointer to 0 and 1
* Return: value of unsigned int
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
	return 0;

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i]-'0';
		i++;
	}
	return val;
}
