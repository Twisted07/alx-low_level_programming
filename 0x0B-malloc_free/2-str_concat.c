#include <stdio.h>
#include <stdlib.h>

/**
*str_concat - concatenates two strings s1 and s2
*@s1: first string
*@s2: second string
* Return: Null if error occurs
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		size1++, i++;
	while (*(s2 + j))
		size2++, j++;
	size2++;

	concat = malloc(sizeof(char) * (size1 + size2));

	if (concat == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < size1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < size2)
	{
		*(concat + i) = *(s2 + j);
		i++, j++;
	}

	return (concat);
}
