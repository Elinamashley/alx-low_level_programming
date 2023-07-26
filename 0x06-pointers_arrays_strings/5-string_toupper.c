#include"main.h"
/**
 * *string_toupper - function that changes all lowercase
 * letters of a string to uppercase
 * @str: input
 *
 * Return: str
 *
 */
char *string_toupper(char *str)
{
	char *result = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (result);
}
