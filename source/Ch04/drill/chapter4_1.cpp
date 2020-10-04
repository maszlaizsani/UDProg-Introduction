#include "std_lib_facilities.h"

double convert(double value,string unit)
{
	if (unit=="cm") value/=100;
	if (unit=="in") value=value*2.54/100;
	if (unit=="ft") value=value*12*2.54/100;
	if (unit=="m") value=value;

	if (unit=="")
			simple_error("Missing unit!");
	if ((unit!="cm")&&(unit!="m")&&(unit!="in")&&(unit!="ft"))
			simple_error("Illegal unit used!");

	return value;
}

int main()
{
	double x=0;
	string unit="";

	vector<double>values_in_meters;
	double smallest=0,largest=0,sum=0;

	double converted_value;

	cout<<"\n~~~~~~~~~~~~~~\n";
	cout<<"Please insert length values!\n";

	while (cin>>x>>unit)
	{
		converted_value=convert(x,unit);
		
		values_in_meters.push_back(converted_value);
	}

	
	smallest=values_in_meters[0];
	largest=values_in_meters[0];
	
	for (int i=0;i<values_in_meters.size();i++)
	{
		sum+=values_in_meters[i];
		if(values_in_meters[i]<smallest)
			smallest=values_in_meters[i];
		if(values_in_meters[i]>largest)
			largest=values_in_meters[i];
	}

	
	cout<<"\nSum:" <<sum<<"m"<<endl;
	cout<<"Largest: "<<largest<<"m"<<endl;
	cout<<"Smallest: "<<smallest<<"m"<<endl;
	cout<<"Number of values entered: "<<values_in_meters.size()<<endl;

	cout<<"\n~~~~~~~~~~~~~~\n"<<"Values sorted:\n";

	sort(values_in_meters);
	for (int i=0;i<values_in_meters.size();i++)	cout<<i+1<<". "<<values_in_meters[i]<<"m"<<endl;
	cout<<"\n~~~~~~~~~~~~~~\n";

	return 0;
} 