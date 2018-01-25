#include <stdio.h>

int main()
{
	// Variables
	int i, n; 
	long int factorial;

	printf("Please enter a natural number: ");
	scanf(" %d", &n);

	if(n < 0)
	{
		printf("Factorial of negative numbers are not defined\n");
		return 1; // Tells my boss that something went wrong
	}

	factorial = 1;
	for(i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}

	printf("Factorial of %d is %ld\n", n, factorial);	

	return 0;
}
