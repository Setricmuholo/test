#include "phone.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	struct phone mi;

	mi.color = "Grey";
	mi.screen = "Amoled";
	mi.model = "Redmi Note 11";

	printf("My phone model %s of color %s has an %s display of 6.4 inches is very cool\n", mi.model, mi.color, mi.screen);
	return (0);
}	
