#include <stdio.h>

int main()
{
	// Variable declarations
	int i, j;	// Scan the operands
	char c;		// Scan the operator
	int result;
	int count;

	printf("Please enter an arithmetic expression involving only two operands:\n");
	scanf(" %d", &i);
	scanf(" %c", &c);
	scanf(" %d", &j);

	//Decide on what operation to do
	switch (c)
	{
		case '+':
			result = sum(i, j);
			printf("%d\n", result);
			break;
		case '-':
			result = diff(i, j);
			printf("%d\n", result);
			break;
		case '*':
		case 'x':
		case 'X':
			result = prod(i,j);
			printf("%d\n", result);
			break;
		case '/':
			result = div(i,j);
			printf("%d\n", result);
			break;
		case '^':
			result = power(i, j);
			printf("%d\n", result);
			break;
		default:
			printf("Illegal operation\n");
			break;
	}

	return 0;
}
