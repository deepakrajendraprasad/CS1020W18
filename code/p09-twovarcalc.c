#include <stdio.h>

int main()
{
	// Variable declarations
	int i, j;	// Scan the operands
	char c;		// Scan the operator
	int result;

	printf("Please enter an arithmetic expression involving only two operands:\n");
	scanf(" %d", &i);
	scanf(" %c", &c);
	scanf(" %d", &j);

	//Decide on what operation to do
	if(c == '+')
	{
		result = i + j;
		printf("%d\n", result);
	}
	else if (c == '-')
	{
		result = i - j;
		printf("%d\n", result);
	}
	else if (c == '*')
	{
		result = i * j;
		printf("%d\n", result);
	}
	else if (c == '/')
	{
		// Division
		if(j == 0)
		{
			printf("Division by zero\n");
		}
		else
		{
			result = i / j;
			printf("%d\n", result);
		}
	}
	else
	{
		printf("Illegal operation\n");
	}
	  

	return 0;
}
