#include <stdio.h>

int main()
{
	// Variable declarations
	int i, j;

	printf("Please enter two integers: ");
	scanf("%d", &i);
	scanf("%d", &j);

	// Decision making
	if (i > j)
	{
		printf("%d is bigger\n", i);
		//	printf("%d", i);
		//	printf(" is bigger\n");
	}
	else if (i == j)
	{
		printf("Both are equal\n");
	}
	else
	{
		printf("%d is bigger\n", j);
		
	}

	return 0;
}
