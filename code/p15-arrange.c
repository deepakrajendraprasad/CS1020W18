#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Please enter three integers: ");
	scanf(" %d %d %d", &a, &b, &c);

	if(a < b)
	{
		if (a < c)
		{
			printf("%d\n", a);
			if (b < c)
			{
				printf("%d\n", b);
				printf("%d\n", c);
			}
			else
			{
				printf("%d\n", c);
				printf("%d\n", b);
			}
		}
		else
		{
			printf("%d\n", c);
			printf("%d\n", a);
			printf("%d\n", b);
		}
	}
	else if (b < c)
	{
		printf("%d\n", b);
		if (a < c)
		{
			printf("%d\n", a);
			printf("%d\n", c);
		}
		else
		{
			printf("%d\n", c);
			printf("%d\n", a);
		}
	}
	else
	{
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}

	return 0;
}
