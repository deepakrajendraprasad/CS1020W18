#include <stdio.h>

int main()
{
	// Variable
	int a, n, result;
	float i;

	printf("Which number's table are you looking for?: ");
	scanf(" %d", &a);
	printf("How many rows do you need?: ");
	scanf(" %d", &n);

	for(i = 1; i <= n; i=i+0.5)
	{
		result = a * i;
		printf("%d\n", result);
	}

	return 0;
}
