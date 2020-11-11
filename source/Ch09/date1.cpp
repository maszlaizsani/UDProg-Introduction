#include "std_lib_facilities.h"

struct Date {
	int y; // year
	int m; // month in year
	int d; // day of month
};

void init_day(Date& dd, int y, int m, int d) //dátum inicializálás
{
	if (y > 0) dd.y = y;
	else error("Invalid year");
	
	if (m <= 12 && m > 0) dd.m = m;
	else error("Invalid month");

	if (d > 0 && d < 32) dd.d = d;
	else error("Invalid day");
}

void add_day(Date& dd, int n)
{
	dd.d+=n;
	if (dd.d>31)
	{
		dd.m++;
		dd.d-=31;
		if (dd.m>12)
		{
			dd.y++;
			dd.m-=12;
		}
	}
}

int main()
try{
	Date today; // a Date named object)
	today.y = 1978;
	today.m = 6;
	today.d = 25;
	
	cout <<"Date today: "<<today.y<<"."<<today.m<<"."<<today.d<<"."<<endl;
	
	Date tomorrow=today;
	add_day(tomorrow,1);
	cout <<"Date tomorrow: "<<tomorrow.y<<"."<<tomorrow.m<<"."<<tomorrow.d<<"."<<endl;

	return 0;
} catch (exception& e) 
{
	cout<<e.what() <<endl;
	return 1;
}