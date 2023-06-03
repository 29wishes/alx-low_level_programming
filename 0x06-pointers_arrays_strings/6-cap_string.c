#include "main.h"
#include <stdio.h>

/**
  * cap_string - function that capitalizes all words of a string.
  * @str:- single user inpur.
  * Return:- Always 0 (success)
  */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= wq'z'))
		{
			i++;

		}
		if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || i == 0)
		{
			str[i] -= 32;
		}
		i++;

	}
	return (str);
}
