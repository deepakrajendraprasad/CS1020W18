/* 	
	An interactive statistical analyser which can read an array of
	numbers and then do various operations on the array 
*/

#include <stdio.h>

int main()
{
	// Declare and array called scores for the input data
	int scores[10] = {12, 15, 10, 11, 9, 34, 12, 23, 24, 12};		
	// The array scores can store a maximum of 10 integers,
	//	and it is initialised as above.
	int i, j, length, option;
	int sum;
	float avg;
	int treasure, search_success, replacement, num_replacements;
	int backup;

	length = 10;
/*
	printf("Please enter the number of scores (Maximum 10): ") ;
	scanf(" %d", &length);

	// I forgot to do this check in class. 
	// It is highly recommended to do this check when reading
	// Data and storing it in an array.	
	if(length > 10)
	{
		printf("Sorry, this is a trial version of the software.\n");
		printf("You can only store at most  10 numbers\n");
		return 1;
	}

	// Read the data from the user and store it the array
	printf("Please enter the scores: ");
	for(i = 0; i < length; i++)
	{
		scanf(" %d", &scores[i]);
	}
*/

	while(1)	// Infinite loop!
	{
		printf("\nWhat would you like to know?\n");
		printf("\t 0. Display the array\n");
		printf("\t 1. Sum\n");
		printf("\t 2. Average\n");
		printf("\t 3. Search\n");
		printf("\t 4. Search and Replace\n");
		printf("\t 5. Reverse the array\n");
		printf("\t 6. Sort the array\n");
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
			case 5: // Reverse the array
				for(i = 0; i < length/2; i++)
				{ 
					//Exchange scores[i] with scores[length-1-i]
					backup = scores[i];
					scores[i] = scores[length-1-i];
					scores[length-1-i] = backup;
				}
				printf("The array is now reversed\n");
				break;	

			case 6: // Sort the array in ascending order
				for(i = 0; i < length-1; i++) // rounds
				{
					for(j = 0; j < length-1-i; j++) // Bubble 
					{
						if(scores[j] > scores[j+1])
						{
							//Exchange scores[j] with scores[j+1]
							backup = scores[j];
							scores[j] = scores[j+1];
							scores[j+1] = backup;
						}
					} 
				}
				printf("The array is now sorted\n");
				break;	
				
			case 9: // Exit the program
				return 0;
			default: 
				printf("Illegal operation \n");
				break;
		}
	} // End of while(1)	

} 

