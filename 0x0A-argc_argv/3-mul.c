#include <stdio.h>
#include <stdlib.h>

/**
*main - Multiplies 2 numbers inputed
*@argc: argument counter
*@argv: pointer to array of arguments
*Return: print error if 2 arg are not received and return 0
*/

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
