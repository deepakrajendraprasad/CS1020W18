/*
	Program to do Matrix operations
*/

#include <stdio.h>

int main()
{
	int data[20][20] = {0};
	int num_rows, num_cols;
	int i, j, option;	
	int sum, value, backup;
	// Declare the file pointers
	FILE *in_file, *out_file;
	char in_file_name[100], out_file_name[100];

	num_rows = 20;
	num_cols = 20;
	
	while(1)	// Infinite loop!
	{
		printf("\nWhat would you like to know?\n");
		printf("\t 0. Display the Matrix\n");
		printf("\t 1. Sum\n");
		printf("\t 2. Search\n");
		printf("\t 3. Search and Replace\n");
		printf("\t 4. Left-right flip\n");
		printf("\t 5. Load a matrix from file\n");
		printf("\t 6. Save the matrix to a file\n");
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
			case 5: // Load the matrix from a file
				// Get the file name from the user
				printf("Please enter the input file name: ");
				scanf("%s", in_file_name);
				// Open the input file
				in_file = fopen(in_file_name, "r");
				if(in_file == NULL)
				{
					printf("The file %s could not be opened\n", in_file_name); 
					break;
				}
				fscanf(in_file, " %d", &num_rows);	
				fscanf(in_file, " %d", &num_cols);	
				for(i = 0; i < num_rows; i++)
				{
					for(j = 0; j < num_cols; j++)
					{
						fscanf(in_file, " %d", &data[i][j]);
					}
				}

				fclose(in_file);
				break;
			case 6: // Save the matrix to a file
				// Get the file name from the user
				printf("Please enter the output file name: ");
				scanf("%s", out_file_name);
				// Open the output file
				out_file = fopen(out_file_name, "w");

				fprintf(out_file, "%d\n", num_rows);	
				fprintf(out_file, "%d\n", num_cols);	
				for(i = 0; i < num_rows; i++)
				{
					for(j = 0; j < num_cols; j++)
					{
						fprintf(out_file, "%d ", data[i][j]);
					}
					fprintf(out_file, "\n");
				}

				fclose(out_file);
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

