/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>

void reverse(char *str, int start, int end);

void str_words_in_rev(char *input, int len)
{
	int start = 0, end = 0;
	reverse(input, 0, len);
	do
	{
		if (input[end] == ' ' || input[end] == '\0')
		{
			reverse(input, start, end);
			start = end + 1;
		}
		end++;
	} while (input[end - 1] != '\0');
}
void reverse(char *str, int start, int end)
{
	int i = start, j = end - 1;
	char temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

}