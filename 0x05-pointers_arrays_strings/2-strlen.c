#include "main.h"
#include  <stdio.h>

/**
 * _strlen - function toprint string length
 * @s:- value
 * Return:- Always 0 (success).
 */
int _strlen(char *s)
{
	int i = 1;
	int leng = 0;
	char str = s[0];

	while (str != '\0')
	{
		leng++;
		str = s[i++];
	}
	return (leng);
}
