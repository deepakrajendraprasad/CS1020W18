#include <stdio.h>

int trials_binary_search = 0;

int* binary_search(int *, int *, int);

int main()
{
	int length = 16;
	int data[] = {3,7,9,15,16,17,100,103,250,300,301,302,500,501,505,900};
	int target; 
	int *p_location;
	int *p_start, *p_end;

	p_start = &data[0];
	p_end = &data[length-1];

	printf("Please enter the search value: ");
	scanf(" %d", &target);

	p_location = binary_search(p_start, p_end, target);

	if(p_location == NULL)
	{
		printf("The value %d is not in the array\n", target);
	}
	else
	{
		printf("The value %d is location %d\n", target, p_location - data);
	}

	printf("I had to make %d tries\n", trials_binary_search);
	return 0;
}

/*
	binary_search will check the numbers from location starting at p_start and
	ending at p_end.
	It returns the pointer to the location of the target value if the target is
	found. Otherwise return NULL pointer.
*/
int* binary_search(int *p_start, int *p_end, int target)
{
	int *p_middle, *p_location;

	trials_binary_search ++;

	p_middle = p_start + (p_end - p_start)/2;

	if(p_end - p_start < 0)
	{
		return NULL;
	}

	if(*p_middle == target)
	{
		return p_middle;
	}
	else if(*p_middle > target)
	{
		p_location = binary_search(p_start, p_middle-1, target);
		return p_location;
	}
	else // *p_middle < target 
	{
		p_location = binary_search(p_middle+1, p_end, target);
		return p_location;
	}

}
