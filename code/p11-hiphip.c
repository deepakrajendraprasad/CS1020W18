#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;

	for(i = 1; i < 16; i++)
	{
		if(i % 3 == 0)
			system("picospeaker hurrah");
		else
			
			system("picospeaker hip");
	}

	return 0;

}
