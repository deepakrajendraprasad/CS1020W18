/*
Illustrate the scope of a variable
*/

#include <stdio.h>

int test_function(int);

int main()
{

	int i, j;

	i = 0;
	printf("i = %d\n", i);

	j = test_function(i);

	printf("i = %d\n", i);
	printf("j = %d\n", j);

	j = test_function(i);
	int x;


	printf("i = %d\n", i);
	printf("j = %d\n", j);

	return 0;
} 

int test_function(int i)
{
	int k;
	printf("i = %d\n", i);
	printf("k = %d\n", k);
	k = i + 1;
	printf("k = %d\n", k);
	return i;
}
