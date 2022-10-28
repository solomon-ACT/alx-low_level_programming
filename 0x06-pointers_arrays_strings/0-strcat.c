#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * _strcat - a function that concatenates two strings
 * @s1: copy to
 * @s2: copy from
 * Return: two concat strings
 */
char *_strcat(char *s1, char *s2)
{
int length = 0;
int j;
	while (s1[length] != '\0')
	{
		++length;
	}
	for (j = 0; s2[j] != '\0'; ++j, ++length)
	{
		s1[length] = s2[j];
	}
s1[length] = '\0';
return (s1);
}
