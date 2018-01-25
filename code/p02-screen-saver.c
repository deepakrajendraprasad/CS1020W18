#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int i,j;
	for(;;)
	{
		j = 20 + rand() % 60;
		for(i = 0; i < j; i++)
			printf(" ");
		printf("#\n");
	}

	return 0;
}
