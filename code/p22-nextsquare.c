/*
Program to find the smallest perfect square m such that m is greater or equal to the number entered by the user.
*/

#include <stdio.h>

int main()
{
	int n, i;

	printf("Please enter a positive number: ");
	scanf(" %d", &n);

//	for(i = 1; i*i <n; i++);

	i = 1;
	while(i*i < n)
	{
		i = i + 1;
	}

	printf("Nearest square to the right of %d is %d\n", n, i*i);

	return 0;
}
