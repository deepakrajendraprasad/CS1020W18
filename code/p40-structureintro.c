#include <stdio.h>

typedef struct
{
	int hour;
	int minute;
	int second;
} time;

time inc_time(time);

int main()
{
	time t,t1;

/*
	t.hour = 11;
	t.minute = 20;
	t.second = 35;

	t = (time){11,30,45};
*/
	printf("Please enter the current time (hh:mm:ss): ");
	scanf("%i:%i:%i", &t.hour, &t.minute, &t.second);

	printf("Current Time is %2i:%2i:%2i\n", 
		t.hour, t.minute, t.second);

	t1 = inc_time(t);
	
	printf("Incremented Time is %02i:%02i:%02i\n", 
		t1.hour, t1.minute, t1.second);
	printf("Current Time is %2i:%2i:%2i\n", 
		t.hour, t.minute, t.second);

	return 0;
}

time inc_time(time t)
{
	if(t.second <= 58)
		t.second++;
	else if(t.second == 59 && t.minute <= 58)
	{
		t.minute++;
		t.second = 0;
	}
	else if(t.second == 59 && t.minute == 59 && t.hour <= 22)
	{
		t.hour++;
		t.minute = 0;
		t.second = 0;
	}
	else if(t.second == 59 && t.minute == 59 && t.hour == 23)
		t = (time){0, 0, 0};

	return t;

}
