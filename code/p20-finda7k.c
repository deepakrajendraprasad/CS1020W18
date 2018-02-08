#include <stdio.h>
// Find the first time the user enters a multiple of 7


int main()
{
	int data, position;

	printf("Please enter a list of integers ending in a zero:\n");

	position = 0;
	do
	{
		scanf(" %d", &data);
		position = position + 1;
	}
	while(data % 7 != 0);
	
	printf("First multiple of 7 is %d ",data);
	printf("and it occcurs in position %d\n", position );


	return 0;
}
