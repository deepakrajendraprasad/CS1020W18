#include <stdio.h>

int main()
{
	// Variables
	int a, b, i, min;

	printf("Please enter two positive natural number: ");
	scanf(" %d %d", &a, &b);

	// Computes the minimum of a and b
	if(a > b)
	{
		min = b;
	}
	else
	{
		min = a;
	}

	// Checking for common divisors
	for(i = 2; i <= min; i++)
	{
		if((a % i == 0) && (b % i == 0))
		{
			printf("%d and %d are not relatively prime because %d divides both.\n", a, b, i);
			return 1;
		}
	}

	// If you reach here then a and b did not have any common factor between 2 and min
	printf("%d and %d are relatively prime.\n", a, b);	

	return 0;
}
