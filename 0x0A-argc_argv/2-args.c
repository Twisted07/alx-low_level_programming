#include <stdio.h>
#include <stdlib.h>

/**
*main - print all arguments including the first argument
*on new lines
*@argc: argument counter
*@argv: pointer to array of argument
*Return: on success, 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
