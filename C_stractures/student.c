#include "student.h"
#include <stdio.h>

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	struct student s1;

	s1.name = "Sedric Muholo";
	s1.age = 26;
	s1.marks = 82;

	printf("The student is %s of age %d had scored %f in test\n", s1.name, s1.age, s1.marks);
	return (0);
}
