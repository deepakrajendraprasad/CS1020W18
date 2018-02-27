/*
	Learning basic file operations
*/

#include <stdio.h>

int main()
{
	// Read a text file and print it to the screen

	// Declare the file pointers
	FILE *in_file;
	FILE *out_file;
	int ret_value, count;
	char c;
	char in_file_name[100];
	char out_file_name[100];

	// Get the file name from the user
	printf("Please enter the input file name: ");
	scanf("%s", in_file_name);
	printf("Please enter the output file name: ");
	scanf("%s", out_file_name);

	// Open the input file
	in_file = fopen(in_file_name, "r");
	if(in_file == NULL)
	{
		printf("The file %s could not be opened\n", in_file_name); 
		return 1;
	}
	// Open the output file
	out_file = fopen(out_file_name, "w");

	while(1)
	{
		ret_value = fscanf(in_file, "%c", &c);
		if(ret_value == EOF)
		{
			break;
		}
		fprintf(out_file, "%c", c-1);
	}


	// Close the files
	fclose(in_file);
	fclose(out_file);

	return 0;

} 

