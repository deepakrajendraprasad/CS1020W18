#include <stdio.h>

void swap(int *, int *);
void print_array(int *, int );
void print_range(int *, int *);

int main()
{
	int a, b;
	int c, d;
	char e;

	a = 124;
	c = 300;

	int *p, *q;
	p = &a;
	q = &b;

	printf("Address of b - Address of a = %d\n", q - p);

	int array[10] ={1, 2, 3, 1, 2, 3, 1, 2, 3, 1};
	printf("Ending address of array  - starting address of array = %p\n", &array[9] - &array[0]);

/*
	printf("Address of a is %p\n", &a);
	printf("Value of p is %p\n", p);
	printf("Value stored at p is %d\n", *p);
	printf("Address of p is %p\n\n", &p);

	p = &b;
	printf("Value of p is %p\n", p);
	printf("Value stored at p is %d\n", *p);


	printf("Address of p is %p\n", &p);
	printf("Address of b is %p\n", &b);
	printf("Address of c is %p\n", &c);
	printf("Address of d is %p\n", &d);
	printf("Address of e is %p\n", &e);

	
	printf("Value of a before swap is %d\n", a);
	printf("Value of b before swap is %d\n", b);
	swap(&a, &b);
	printf("Value of a after swap is %d\n", a);
	printf("Value of b after swap is %d\n", b);
	printf("Value of c after swap is %d\n", c);
*/


	// print_array(&array[0], 10);
	print_array(array, 10);
	print_range(&array[0], &array[9]);

	return 0;
}

void swap(int *add1, int *add2)
{
	int temp;
	temp = *add1;
	*add1 = *add2;
	*add2 = temp;

	printf("Value in next location after add2 is %d\n", *(add2+1));

	*(add2+1) = -300;
	return;
}

void print_array(int *p, int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("*(p+i) = %d\n", *(p+i));
		printf("p[i] = %d\n", p[i]);
	}

	return;
}


void print_range(int *start, int *end)
{
	for(; start <= end; start++)
	{
		printf("Value stored in %p is %d\n", start,  *start);
	}
	return;
}
