#include <stdio.h>
#include <math.h>

int main()
{
	// Variables
	int n, i;
	float sqrt_n;

	printf("Please enter a positive natural number: ");
	scanf(" %d", &n);

	// Computes the square root using a math library funtion
	sqrt_n = sqrt(n);

	for(i = 2; i <= sqrt_n; i++)
	{
		if(n % i == 0 )
		{
			printf("%d is not prime because %d divides it.\n", n, i);
			return 1;
		}
	}

	// If you reach here then n did not have any factor between 2 and n-1
	printf("%d is prime.\n", n);	

	return 0;
}
