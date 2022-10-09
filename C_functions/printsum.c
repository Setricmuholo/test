#include <stdio.h>

void sum()
{
	int x, y, sum = 0;

	printf("enter value of x and y:");
	scanf("%d%d", &x, &y);
	sum = x + y;
	printf("sum = %d\n", sum);
}

void main()
{
	sum();
	printf("Hello\n");
	sum();
	sum();
	sum();
}

/**
 * this is a simple program that asks users for numbers
 * and sums them up
 * the program prints sum for 4 times but you can still
 * add more
 */

