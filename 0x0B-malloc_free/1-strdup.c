#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - function returns a pointer to the duplicated string
*@str:
*@
*Return: Null for failure
*/

char *_strdup(char *str)
{
	int i = 0;
	char *dup_str;
	int len;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(char) * len);

	if (dup_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(dup_str + i) = *(str + i);
		i++;
	}

	return (dup_str);
}
