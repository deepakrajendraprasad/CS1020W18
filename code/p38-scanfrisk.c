#include <stdio.h>

int main()
{
	char name[20];

	printf("Please enter your name:");
	scanf("%19s", name);

	printf("Hello %s\n", name);

	return 0;
}
