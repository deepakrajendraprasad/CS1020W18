#include <stdio.h>

int factorial(int);


int main()
{
	int n, f;

	printf("Please enter a positive number: ");
	scanf(" %d", &n);

	f = factorial(n);

	printf("Factorial of %d is %d\n", n, f);

	return 0;
}

int factorial(int n)
{
	int f;

	printf("I'm going to compute the factorial of %d\n", n);

	if(n == 1)
	{
		f = 1;
	}
	else
	{
		f = n * factorial(n-1);
	}

	printf("I have computed the factorial of %d\n", n);

	return f;
}
