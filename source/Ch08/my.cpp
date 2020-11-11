#include "std_lib_facilities.h"
#include "my.h"

void print_foo()
{
	cout << foo <<endl;

}

void print (int i)
{
	cout << i <<endl;
}

void swap_v(int a, int b)
{
	cout<<a<<", "<<b<<endl;
	int temp;
	temp = a; 
	a=b;
	b=temp;
	cout<<a<<", "<<b<<endl;
}

void swap_r (int& a, int& b)
{
	cout<<a<<", "<<b<<endl;
	int temp;
	temp = a;
	a=b;
	b=temp;
	cout<<a<<", "<<b<<endl;
}

/*void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a; 
	a=b;
	b=temp;
}*/ //konstansok értékét nem lehet változtatni