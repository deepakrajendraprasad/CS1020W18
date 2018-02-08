/*
Program to find the square root of the number entered with a precision of 3 decimals.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float x, approx_root, better_root;
	float a, b, mid;
	int i;
	int sign_change;

	printf("Please enter a positive real number: ");
	scanf(" %f", &x);

	sign_change = 0;
	if(x < 0)
	{
		x = -x;
		sign_change = 1;
	}

	i = 1;
	while(i*i < x)
	{
		i = i + 1;
	}

	b = i;
	a = i-1;

	while(b - a > 0.001)
	{
		mid = (a + b)/2;
		if(mid * mid <= x)
		{
			a = mid;
		} 
		else
		{
			b = mid;
		}
	}

	approx_root = (a+b)/2;
	better_root = sqrt(x);

	if(sign_change == 0)
	{
		printf("The square root of %f is approximately %f\n", x, approx_root);
		printf("The square root of %f is %f\n", x, better_root);
	}
	else
	{
		printf("The square root of %f is approximately %fi\n", x, approx_root);
		printf("The square root of %f is %fi\n", x, better_root);
	}
	
	
	return 0;
}
