#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
*num - a positive number
*@args: an argv
*Return: 1 if Error occurs, 0 if successful
*/

bool num(char *args)
{
	int i = 0;

	for (i = 0; args[i]; i++)
	{
		if (!(args[i] >= '0' && args[i] <= '9'))
		return (0);
	}
	return (1);
}

/**
*main - main summation of positive
*@argc: argument counter
*@argv: pointer to array of arguments
*Return: 0 on success
*/

int main(int argc, char *argv[])
{
	int j = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0/n");
		return (0);
	}

	while (j < argc)
	{
		if (num(argv[j]))
		{
			sum += atoi(argv[j]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		j++;
	}
	printf("%d\n", sum);
	return (0);
}
