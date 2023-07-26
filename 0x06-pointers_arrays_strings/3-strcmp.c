#include"main.h"
/**
 *  _strcmp - function that compares two strings
 *   function should work exactly like strcmp
 *   @s1: input
 *   @s2: input
 *
 *   Return: *s1 - *s2
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
