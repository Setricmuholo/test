#include <stdio.h>
#include <string.h>
int main()
{
	char s1[10] = "Sedric";
	char s2[9] = "muholo";

	strncat(s1, s2, 4);
	printf("%s\n", s1);
}
