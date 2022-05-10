#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - function returns a pointer to the duplicated string
*@str: strin
*Return: Null for failure
*/

char *_strdup(char *str)
{

	char *dup_str;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(char));

	if (dup_str == NULL)
		return (NULL);

	else
		return (dup_str);
}
