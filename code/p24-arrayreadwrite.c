/* Declare, Write and Read Arrays */

#include <stdio.h>

int main()
{
	// Declare and array called scores
	// which can store a maximum of
	// 10 integers.
	int scores[10];
	int i, length = 10;

	printf("Please enter the number of scores (Maximum 10): ") ;
	scanf(" %d", &length);

	// Store the scores
	printf("Please enter the scores: ");
	for(i = 0; i < length; i++)
	{
		scanf(" %d", &scores[i]);
	}



	// Print all the data in scores
	for(i = 0; i < length; i++)
	{ 
		printf(" %d\n", scores[i]);
	}

	return 0;
} 

