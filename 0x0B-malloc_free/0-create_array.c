#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of chars, and initializes it with a specific char
*@size: is the size of array
*@c: fill array value with this char
* Return: Null if failure occurs, else pointer to array
*/

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == 0)
		return (NULL);

	while (i < (int)size)
	{
		*(arr + 1) = c;
		i++;
	}
	*(arr + 1) = '\0';

	return (arr);
}
