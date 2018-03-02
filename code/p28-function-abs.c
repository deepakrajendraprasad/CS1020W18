/*
	Find the absolute value of a number
	using a dedicated function
*/

#include <stdio.h>

// Declare the function for computing absolute value
float my_abs(float);

int main()
{
	
	float x, y;

	printf("Please enter a number: ");
	scanf(" %f", &x);

	// Call the function abs
	y = my_abs(x);

	printf("The absolute value of %g is %g\n", x, y);

	return 0;
} 


// Define the function for computing absolute value
float my_abs(float x)
{
	float ans;
	if(x >= 0)
	{
		ans = x;
	}
	else
	{
		ans = 0.0 - x;
	}

	return ans;
}
