#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i,j;
	for(;;)
	{
		j = rand() % 60;
		for(i = 0; i < j; i++)
			printf("%d", (i+j)%2);
		printf("\a");
		printf("\n");
	}

	return 0;
}
