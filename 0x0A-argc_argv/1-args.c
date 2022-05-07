#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the number of arguments passed into it
*@argc: argument counter
*@argv: pointer to array of arguments
*Return: 0, for success
*/

int main(int argc, char *argv[])
{
	if (argv[0] != 0)
	printf("%d\n", argc - 1);
	return (0);
}
