/*
	Some simple functions
*/

#include <stdio.h>

// Declare the functions
int floor(float);
int ceil(float);
char to_upper(char);
float max(float, float);
void print_message();

int main()
{
	
	float x,y, max_value;

	printf("Please enter two numbers: ");
	scanf(" %f", &x);
	scanf(" %f", &y);
	
	max_value = max(x,y);

	printf("The maximum of %g and %g is %g\n", x, y, max_value);

/*
	printf("Please enter a character: ");
	scanf(" %c", &d);


	// Call the function floor
	y = floor(x);
	printf("floor(%g) = %d\n", x, y);

	// Call the function ceil
	y = ceil(x);
	printf("ceil(%g) = %d\n", x, y);

	// Call the to_upper function
	e = to_upper(d);
	printf("%c is the upper case of %c\n", e, d);
*/
	return 0;
} 

// Define max
float max(float first, float second)
/*
	The max function accepts two floating point numbers
	and returns their maximum value 
*/
{
	if(first >= second)
	{
		return first;
	}
	else
	{
		return second;
	}
}

// Define the floor function
int floor(float x)
/*
	floor function takes a floating point number as input
	and returns the largest integer that is at most the input.
*/
{
	int ans, ix;

	ix = (int) x;
	if(ix <= x)
	{
		ans = ix;
	}
	else
	{
		ans = ix - 1;
	}

	return ans;
}


// Define the ceil function
int ceil(float x)
/*
	ceil function takes a floating point number as input
	and returns the smallest integer that is at least the input.
*/
{
	int ans, ix;

	ix = (int) x;
	if(ix < x)
	{
		ans = ix + 1;
	}
	else
	{
		ans = ix;
	}

	return ans;
}

char to_upper(char c)
/*
	The functon to_upper accepts a character as input
	and returns the upper case equivalent of the input
	if the input is a lower case alphabet. 
	Otherwise it returns the input itself.
*/
{
	char ans;

	// If c is a vaild lower case character
	// ascii(c) >= ascii(a) and ascii(c) <= ascii(z)
	if(c >= 'a' && c <= 'z' )
	{
		//Do the conversion
		ans = c - 'a' + 'A';
		return ans;
	}
	else
	{
		return c;
	}
}
