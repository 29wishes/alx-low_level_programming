#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap
 * @a:- value
 * @b:- value
 */

void swap_int(int *a, int *b)
{
	int class = *a;
	*a = *b;
	*b = class;
}
