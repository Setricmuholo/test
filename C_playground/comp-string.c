#include  <stdio.h>
#include <string.h>
int main()
{
	int value = 0, i;

	char s1[15], s2[10];
	printf("Enter your string1: ");
	scanf("%s", s1);
	printf("Enter your string2: ");
	scanf("%s", s2);

	/* function using standard variable 'strcmp'*/
	/*value = strcmp(s1, s2);
	if (value == 0)
		printf("same\n");
	else
		printf("not same\n");*/

	/* for a logic function*/
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			value = 1;
			break;
		}
	}
	if (value == 1)
		printf("not same\n");
	else
		printf("same\n");
}
