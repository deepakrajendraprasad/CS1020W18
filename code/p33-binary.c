#include <stdio.h>

void print_binary(int);


int main()
{
	int n;

	printf("Please enter a positive number: ");
	scanf(" %d", &n);

	print_binary(n);
	printf("\n");

	return 0;
}

void print_binary(int n)
{
	int rest_of_n, last_bit_of_n;

	last_bit_of_n = n % 2;
	rest_of_n = n/2;

	if( rest_of_n > 0)
	{
		print_binary(rest_of_n);
	}
	printf("%d ", last_bit_of_n);
}
