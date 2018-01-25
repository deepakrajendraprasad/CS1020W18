#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number, digit, i, mask;
	
	printf("Please enter a 2-digit number: ");
	scanf(" %d", &number);

	if(number < 0 || number > 99)
		return 1;	
	
	mask = 10;
	for(i = 0; i < 2; i++)
	{
		digit = number /mask;
		number = number % mask;
		mask = mask / 10; 
		
		switch(digit)
		{
		case 0 :
			system("aplay -q zero.wav");
			break;
		case 1 :
			system("aplay -q one.wav");
			break;
		case 2 :
			system("aplay -q two.wav");
			break;
		case 3 :
			system("aplay -q three.wav");
			break;
		case 4 :
			system("aplay -q four.wav");
			break;
		case 5 :
			system("aplay -q five.wav");
			break;
		case 6 :
			system("aplay -q six.wav");
			break;
		case 7 :
			system("aplay -q seven.wav");
			break;
		case 8 :
			system("aplay -q eight.wav");
			break;
		case 9 :
			system("aplay -q nine.wav");
			break;
		}
	}
	
	return 0;
}
		
