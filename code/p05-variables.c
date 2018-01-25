#include <stdio.h>

int main()
{

	// Variable declarations
	int i,j, quotient, remainder;


	// Read value of i from user
	printf("Please enter an integer:  ");
	scanf("%d", &i);

	printf("Please enter another integer:  ");
	scanf("%d", &j);
	
	quotient = i / j;
	remainder = i % j;

	printf("Quotient =  ");
	printf("%d\n", quotient);
	

	printf("Remainder =  ");
	printf("%d\n", remainder);

	// Tell the operating system that everything went well.
	return 10;
}
