#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *    main - random number to the variable n each time it is executed
 *    Description: if the number is greater than 0: is positive
 *    if the number is 0: is zero
 *     if the number is less than 0: is negative
 * Return: 0
 */
int main(void)
{
	int k;

	srand(time(0));
	k = rand() - RAND_MAX / 2;
	if (k > 0)
	{
		printf("%d is positive\n", k);
	}
	else if (k == 0)
	{
		printf("%d is zero\n", k);
	}
	else if (k < 0)
	{
		printf("%d is negative\n", k);
	}
	return (0);
}
