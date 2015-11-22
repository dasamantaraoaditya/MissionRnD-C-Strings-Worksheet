/*
OVERVIEW: Given a float number ,Convert it into a string

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<stdlib.h>
char * reverse(char *str, int end);
void number_to_str(float number, char *str, int afterdecimal){

	int i = 0, num, aft_dec = afterdecimal, minus = 0;

	while (aft_dec--)
		number *= 10;
	aft_dec++;

	num = number;
	if (num<0)
	{
		minus = 1;
		num *= -1;
	}
	while (num)
	{
		if (aft_dec == afterdecimal&&afterdecimal)
		{
			str[i++] = '.';
		}
		aft_dec++;
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (minus)
		str[i++] = '-';
	str[i] = '\0';

	str = reverse(str, i);
}
char * reverse(char *str, int end)
{
	int i = 0, j = end - 1;
	char temp;
	while (i<j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return str;
}