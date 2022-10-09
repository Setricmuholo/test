#include <stdio.h>
#include <string.h>
int main()
{
	int len1, len2, i = 0;

	char s1[30] = "Sedrick";
	char s2[13] = "Muholo";

	len1 = strlen (s1);
	len2 = strlen (s2);

	for (i = 0; i <= len2; i++)
	{
		s1[len1 +i] = s2[i];
	}
	/*strcat(s1, s2);*/
	printf("%s\n", s1);
}
