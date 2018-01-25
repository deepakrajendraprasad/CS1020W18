#include <stdio.h>

int main()
{
	// Variable declarations
	int i, remainder;

	printf("Please enter an integer: ");
	scanf("%d", &i);

	remainder = i % 3;

	// Decision making
	if (remainder == 0)
	{
		printf("It is a multiple of 3\n");	
	}

	return 0;
}
