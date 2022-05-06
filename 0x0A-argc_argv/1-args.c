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
	if (argc > 0)
	printf("%d\n", argc);
	return (0);
}
