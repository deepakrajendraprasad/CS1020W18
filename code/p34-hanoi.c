#include <stdio.h>

int Hanoi_moves(int, int, int, int);

int main()
{
	int n, count;

	printf("Please enter the number of disks: ");
	scanf(" %d", &n);


	count = Hanoi_moves(n, 1, 2, 3);
	printf("Total number of moves = %d\n", count);

	return 0;
}

int Hanoi_moves(int n, int source, int dest, int temp)
{
	static int count = 0;

	if(n == 0)
	{
		return count;
	}
	else
	{
		Hanoi_moves(n-1, source, temp, dest);
		printf("Move Disk-%d from Tower-%d to Tower-%d\n", n, source, dest);
		count = count + 1;
		Hanoi_moves(n-1, temp, dest, source);
		return count;
	}
}

