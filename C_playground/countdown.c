#include <stdio.h>

/**
 * maint - Entry point
 * print number count from 0 upto 10
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		/*printf("%d", i);*/
		/* changing the function to a nested for loop*/

		for (int k = i ; k >= 0 ; k--)
		{
			printf("%d ", k);
		}
		printf("\n");
	}
	return (0);
}
