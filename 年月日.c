#include <stdio.h>
struct date{
	int year;
	int month;
	int day;
}; 
int main()
{
	struct date today;
	today=(struct date){2020,12,12};
	struct date day;
	day=today;
	struct date *pdate=&today;
	printf("Today is %d %d %d\n",today.year,today.month,today.day);
	printf("Day is %d %d %d\n",day.year,day.month,day.day);
	printf("address of today is %p\n",pdate);
	return 0;
}
