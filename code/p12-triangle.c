#include <stdio.h>

int main()
{
	// Variables
	float x, y, z;

	printf("Please enter three lengths:\n");
	scanf(" %f", &x);
	scanf(" %f", &y);
	scanf(" %f", &z);

	// printf("%f, %f, %f\n", x, y, z);

	if ((x < y + z) && (y < x + z) && (z < y + x))
	{
		printf("They can form a non-empty triangle\n");
	}
	else
	{
		printf("They cannot form a non-empty triangle\n");
	}

	return 0;
}
