/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>

char removeSpaces(char *str) {
	int i, j = 0;
	if (str == NULL)
		return '\0';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			str[j++] = str[i];
	}
	for (i = j; str[i] != '\0'; i++)
		str[i] = '\0';
}