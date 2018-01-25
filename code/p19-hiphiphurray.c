#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Variables
	int i;

	for(i = 0; i < 15; i++)
	{
		switch (i % 3)
		{
			case 0:
			case 1:
				system("picospeaker Hip");
				break;
			case 2:
				system("picospeaker Hurray");
				break;
		}
	}

	return 0;
}
