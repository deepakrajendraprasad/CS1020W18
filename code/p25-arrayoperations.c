/* Array operations */

#include <stdio.h>

int main()
{
	// Declare and array called scores
	// which can store a maximum of
	// 10 integers.
	int scores[5];
	int i, length = 10;
	int sum;
	float avg;
	int option, treasure, search_success, replacement, num_replacements;

	printf("Please enter the number of scores (Maximum 10): ") ;
	scanf(" %d", &length);

	// Store the scores
	printf("Please enter the scores: ");
	for(i = 0; i < length; i++)
	{
		//	scanf(" %d", &scores[i]);
		scores[i] = i;
	}

	while(1)
	{
		printf("\nWhat would you like to know?\n");
		printf("\t 0. Display the array\n");
		printf("\t 1. Sum\n");
		printf("\t 2. Average\n");
		printf("\t 3. Search\n");
		printf("\t 4. Search and Replace\n");
		printf("\t 9. Exit the program\n");
		scanf(" %d", &option);

		switch(option)
		{
			case 0:	// Print all the data in scores
				for(i = 0; i < length; i++)
				{ 
					printf(" %d, ", scores[i]);
				}
				printf("\n");
				break;	
			case 1: // Sum
				sum = 0;
				for(i = 0; i < length; i++)
				{ 
					sum = sum + scores[i];
				}
				printf("Sum of scores is %d\n", sum);	
				break;
			case 2: // Average
				sum = 0;
				for(i = 0; i < length; i++)
				{ 
					sum = sum + scores[i];
				}
				avg = (float) sum/length;
				printf("Average score is %f\n", avg);	
				break;
			case 3: // Search for a number in the array
				printf("Please enter the value to be searched: ");
				scanf(" %d", &treasure);
				// Find the treasure
				search_success = 0;
				for(i = 0; i < length; i++)
				{
					if(scores[i] == treasure)
					{
						printf("%d is present at index %d\n", treasure, i);
						search_success = 1;
						// break;		
					}
				}
				if(search_success == 0)
				{
					printf("%d is not present in the array\n", treasure);
				}
				break;	
			case 4: // Search and Replace
				printf("Please enter the target and replacement:");
				scanf(" %d %d", &treasure, &replacement);
				// Find treasure and replace it with replacement
				num_replacements = 0;
				for(i = 0; i < length; i++)
				{
					if(scores[i] == treasure)
					{
						scores[i] = replacement;
						num_replacements++;
					}
				}
				printf("%d replacements made.\n", num_replacements);
				break;	
			case 9: // Exit the program
				return 0;
			default: 
				printf("Illegal operation \n");
				break;
		}
	} // End of while(1)	

} 

