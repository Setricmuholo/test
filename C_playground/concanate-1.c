#include <stdio.h>
#include <string.h>
int main(void)
{
	char destination[] = "Hello ";
	char source[] = "world!";

	strcat(destination,source);
	printf("Concatenated String: %s\n", destination);
	return (0);
}
