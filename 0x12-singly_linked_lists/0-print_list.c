#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*list_s - defines elements of list
*@*str: pointer to string
*@len: data
*/


typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;




/**
* print_list - prints out all elements of list
* @h: linked list
* Return: number of nodes in linked list
*/

size_t print_list(const list_t *h)

{
	size_t i = 0;

	while (h != NULL)
	{
		if (h -> str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h -> len , h -> str);

		i++;
		h = h->next;
	}
	return (i);
}
