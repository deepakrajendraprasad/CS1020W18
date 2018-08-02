#include <stdio.h>

typedef struct
{
	int year;
	int month;
	int day;
} date;

struct record
{
	char name[100];
	date dob;
	struct record *friend;
};

typedef struct record record;

int main()
{
	record class1[10];
	FILE *fp;
	int i, success, num_records;
	
	fp = fopen("class1.txt", "r");
	if(fp == NULL)
	{
		printf("File not found\n");
		return 1;
	}

	i = 0;
	success = 0;
	for(i =0; i < 2; i++)
	{
		success = fscanf(fp, " %s", class1[i].name);
		success = fscanf(fp, " %i/%i/%i", &class1[i].dob.day, &class1[i].dob.month, &class1[i].dob.year);
		printf("success = %d\n", success);
		printf("%s\n", class1[i].name);
		printf("year = %d\n", class1[i].dob.year);
		printf("month = %d\n", class1[i].dob.month);
		printf("day = %d\n", class1[i].dob.day);
	}
	// while(success != 0);
	num_records = i;

	printf("%d records scanned\n", num_records);
	/*
	for(i = 0; i <= num_records;i++)
		printf("%s\n", class1[i].name);
	*/

	class1[0].friend = &class1[1];
	class1[1].friend = &class1[0];

	return 0;
}
