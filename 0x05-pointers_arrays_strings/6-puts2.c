#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;
	char *f = str;
	int c;

	while (*f != '\0')
	{
		f++;
		len++;
	}
	i = len - 1;
	for (c = 0 ; c <= i ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}

