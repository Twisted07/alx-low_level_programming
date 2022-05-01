#include <stdio.h>
#include "main.h"

/**
* Main - check code
* print a string then move to a new line
* Return: 0
*/
int _putchar (char c);
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	s++;
	_puts_recursion(s);
}
