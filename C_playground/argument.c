#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, sum = 0;

	printf("argc = %d\n", argc);
	/*lets introduce the argv[] which will always bring the value of argc*/
	printf("lets see what is in argv[]\n");
	/*now lets say we want to add the value of all our argv[]*/
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
		sum += atoi(argv[i]);
	}
	}
	printf("Total = %d\n", sum);

	return (0);
}
