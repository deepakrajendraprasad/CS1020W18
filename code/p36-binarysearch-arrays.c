#include <stdio.h>

int trials_binary_search = 0;
int binary_search(int *, int, int);

int main()
{
	int length = 16;
	int data[] = {3,7,9,15,16,17,100,103,250,300,301,302,500,501,505,900};
	int target, location;

	printf("Please enter the search value: ");
	scanf(" %d", &target);

	location = binary_search(data, 16, target);

	if(location == -1)
	{
		printf("The value %d is not in the array\n", target);
	}
	else
	{
		printf("The value %d is location %d\n", target, location);
	}

	printf("I had to make %d tries\n", trials_binary_search);
	return 0;
}

int binary_search(int data[], int len, int target)
{
	int middle, location;

	trials_binary_search ++;

	middle = len/2;

	if(len == 0)
	{
		return -1;
	}

	if(data[middle] == target)
	{
		return middle;
	}
	else if(data[middle] > target)
	{
		location = binary_search(data, middle, target);
		return location;
	}
	else // data[middle] < target 
	{
		location = binary_search(&data[middle+1], len-1 - middle, target);
		if(location == -1)
		{
			return -1;
		}
		else
		{
			return middle+1 + location;
		}
	}

}
