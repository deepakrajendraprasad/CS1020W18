#include <stdio.h>

int str_len(char str[]);
int str_equal(char*, char*);
int str_comp(char*, char*);
int str_in(char*, char*);

int main()
{
	char str[100], str2[100];
	int result;

	printf("Please enter a string: ");
	scanf("%99s", str);

	printf("Please enter another string: ");
	scanf(" %[^\n]99s", str2);

	// result = str_len(str);
	// printf("%s has length %d\n", str, result);

	result = str_in(str, str2);

	if(result == 1)
		printf("%s is a substring of %s\n", str, str2);
	else
		printf("%s is a not substring of %s\n", str, str2);

	/*
	if(result == -1)
		printf("The first string is alphabetically before the second string\n");
	else if(result == 1)
		printf("The second string is alphabetically before the first string\n");
	else
		printf("The two strings are equal.\n");
	*/

	return 0;
}

int str_len(char str[])
{
	int length;

	length = 0;
	while(str[length] != 0)
	{
		length++;
	}

	return length;
}

int str_equal(char str1[], char str2[])
/*
	str_equal returns 1 if the strings are equal
	and 0 otherwise
*/
{
	int i = 0;

	while(str1[i] != 0)
	{
		if(str1[i] != str2[i])
			return 0;
		i++;
	}
	if(str2[i] == 0)
		return 1;
	else
		return 0;
}


int str_comp(char str1[], char str2[])
/*
	str_equal returns -1 if the first string is alphabetically before the second string
	str_equal returns +1 if the second string is alphabetically before the first string
	str_equal returns 0 if the two strings are equal
*/
{
	int i = 0;

	while(str1[i] != 0)
	{
		if(str1[i] < str2[i])
			return -1;
		else if(str1[i] > str2[i])
			return 1;
		i++;
	}

	if(str2[i] == 0)
		return 0;
	else
		return -1;
}

int str_in(char str1[], char str2[])
/*
	return 1 if str1 is found inside str2 as a substring
	retrun 0 otherwise
*/
{
	int i = 0, j = 0;
	int str2_len, str1_len;

	str1_len = str_len(str1);
	str2_len = str_len(str2);

	for(i = 0; i <= str2_len - str1_len; i++)
	{
		for(j = 0; j < str1_len; j++)
		{
			if(str1[j] != str2[i+j])
				break;
		}
		if(j == str1_len)
			return 1;
	}
	return 0;
}
