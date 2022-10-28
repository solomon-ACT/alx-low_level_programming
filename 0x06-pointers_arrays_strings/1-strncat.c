#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 * @s1: copy to
 * @s2: copy from
 * @n: it use for most n bytes from src1
 * Return: two concat strings
 */
char *_strncat(char *s1, char *s2, int n)
{
int length = 0;
int j;
	while (s1[length] != '\0')
	{
		++length;
	}
	for (j = 0; j < n; ++j, ++length)
	{
		s1[length] = s2[j];

	}
	s1[length] = '\0';
	return (s1);
}
