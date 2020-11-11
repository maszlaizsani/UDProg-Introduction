#include "std_lib_facilities.h"

struct Date {
	int year, month, day;
	Date(int y, int m, int d); // check for valid date and initialize
	void add_day(int n); //adds days
};

Date::Date(int y, int m, int d) //dátum inicializálás
{
	if (y > 0) year = y;
	else error("Invalid year");
	
	if (m <= 12 && m > 0) month = m;
	else error("Invalid month");

	if (d > 0 && d < 32) day= d;
	else error("Invalid day");
}

void Date::add_day(int n)
{
	day+=n;
	if (day>31)
	{	
		month++;
		day-=31;
		if (month>12)
		{
			year++;
			month-=12;
		}
	}
}

int main()
try{
	
	Date today(1978,6,25); //osztály készítés a konstruktorral
	cout <<"Date today: "<<today.year<<"."<<today.month<<"."<<today.day<<"."<<endl;

	today.add_day(1);
	Date tomorrow=today;
	cout <<"Date tomorrow: "<<tomorrow.year<<"."<<tomorrow.month<<"."<<tomorrow.day<<"."<<endl;
	return 0;

} catch (exception& e) 
{
	cout<<e.what() <<endl;
	return 1;
}