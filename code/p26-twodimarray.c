/*
	Program to do Matrix operations
*/

#include <stdio.h>

int main()
{
	int data[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int num_rows, num_cols;
	int i, j, option;	
	int sum, value, backup;

	num_rows = 4;
	num_cols = 3;
	
	while(1)	// Infinite loop!
	{
		printf("\nWhat would you like to know?\n");
		printf("\t 0. Display the Matrix\n");
		printf("\t 1. Sum\n");
		printf("\t 2. Search\n");
		printf("\t 3. Search and Replace\n");
		printf("\t 4. Left-right flip\n");
		printf("\t 9. Exit the program\n");
		scanf(" %d", &option);

		switch(option)
		{
			case 0:	// Print all the data 
				// Print the matrix
				for(i = 0; i < num_rows; i++)
				{
					for(j = 0; j < num_cols; j++)
					{
						printf("%3d ", data[i][j]);
					}
					printf("\n");
				}
				break;
			case 1: // Sum all the entries
				sum = 0;
				for(i = 0; i < num_rows; i++)
				{
					for(j = 0; j < num_cols; j++)
					{
						sum = sum + data[i][j];	
					}
				}
				printf("Sum of entries = %d\n", sum);
				break;

			case 2: // Search
				printf("Please enter the search value:");
				scanf(" %d", &value);

				for(i = 0; i < num_rows; i++)
				{
					for(j = 0; j < num_cols; j++)
					{
						if(data[i][j] == value)
						{
							printf("%d is found in row %d, col %d\n", value, i+1, j+1);
						}
					}
				}
				break;
			case 4: // Left-right flip
				for(i = 0; i < num_rows; i++)
				{
					for(j = 0; j < num_cols/2; j++)
					{
						//exchange data[i][j] with data[i][num_cols-1-j]
						backup = data[i][j];
						data[i][j] = data[i][num_cols-1-j];
						data[i][num_cols-1-j] = backup; 
					}
				}	
				break;
				
			case 9: // Exit
				return 0;
			default:
				printf("Illegal operation\n");
				break;
		}
	} // End of while(1)
	return 0;
} 

