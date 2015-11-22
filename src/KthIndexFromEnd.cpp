/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	int i, len = 0;

	if (str == '\0' || K<0)
		return '\0';

	for (i = 0;; i += 2)
	{
		if (str[i] == '\0')
		{
			len = i;
			break;
		}
		if (str[i + 1] == '\0')
		{
			len = i - 1;
			break;
		}
		if (len < K)
			return '\0';
	}
	return str[len - K - 1];
}