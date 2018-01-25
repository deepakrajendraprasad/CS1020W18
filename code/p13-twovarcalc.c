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
			result = i + j;
			printf("%d\n", result);
			break;
		case '-':
			result = i - j;
			printf("%d\n", result);
			break;
		case '*':
		case 'x':
		case 'X':
			result = i * j;
			printf("%d\n", result);
			break;
		case '/':
			if(j == 0)
			{
				printf("Division by zero\n");
				break;
			}
				
			result = i / j;
			printf("%d\n", result);
			break;
		case '^':
			result = 1;
			for(count = 1; count <= j; count++)
			{
				result = result * i;
			}
			printf("%d\n", result);
			break;
		default:
			printf("Illegal operation\n");
			break;
	}

	return 0;
}
