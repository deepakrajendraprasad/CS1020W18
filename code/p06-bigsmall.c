#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Variable declarations
	float x;

	printf("Please enter a real number: ");
	scanf("%f", &x);

	// Decision making
	if (x >= 10)
	{
		printf("It is a big number\n");	
		system("aplay -q big.wav");
	}
	else
	{
		printf("It is a small number\n");	
		system("aplay -q small.wav");

	}

	return 0;
}
