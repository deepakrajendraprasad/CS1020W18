#include <stdio.h>
// Find the first peak in the user entered list of number


int main()
{
	int prev2prev, prev, curr;
	int position;

	printf("Please enter a list of integers ending in a zero:\n");

	scanf(" %d", &prev2prev);
	scanf(" %d", &prev);
	scanf(" %d", &curr);

	position = 2;
	while(prev <= prev2prev || prev <= curr ) 
	// While a peak is NOT found
	{
		prev2prev = prev;
		prev = curr;
		scanf(" %d", &curr);
		position = position + 1;
	}
	
	printf("First peak is %d ", prev);
	printf("in position %d\n", position );


	return 0;
}
