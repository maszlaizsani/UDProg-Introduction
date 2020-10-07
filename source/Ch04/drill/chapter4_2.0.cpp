#include "std_lib_facilities.h"

double convert(double value,string unit) //függvény az átváltásokhoz
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


	vector<double>values; //az eredeti értékeket tárolja
	vector<string>units; //eltárolja a mértékegységeket
	vector<double>values_in_meters; //eltárolja az átváltott hosszúságokat
	

	double sum=0; 
	double max=0, min=0; //indexek
	double converted_value=0;


	cout<<"\n~~~~~~~~~~~~~~\n";
	cout<<"Please insert length values! (m, cm, in, ft) \n";


	while (cin>>x>>unit)
	{
		values.push_back(x);
		units.push_back(unit);

		converted_value=convert(x,unit);
		values_in_meters.push_back(converted_value);

		sum+=converted_value;
	}


	
	for (int i=0;i<values_in_meters.size();i++) 
	{

		if (values_in_meters[i]<values_in_meters[min]) //a legkisebb érték indexét megkeresi és eltárolja
			min=i;

		if (values_in_meters[i]>values_in_meters[max]) //a legnagyobb érték indexét megkeresi és eltárolja
			max=i;
	}


	//összegzés
	cout<<"\nSum:" <<sum<<" m"<<endl;
	cout<<"Smallest: "<<values[min]<<" "<<units[min]<<endl;
	cout<<"Largest: "<<values[max]<<" "<<units[max]<<endl;
	cout<<"Number of values entered: "<<values_in_meters.size()<<endl;

	cout<<"\n~~~~~~~~~~~~~~\n"<<"Values sorted:\n";

	//rendezés
	sort(values_in_meters);
	for (int i=0;i<values_in_meters.size();i++)	cout<<i+1<<". "<<values_in_meters[i]<<" m"<<endl;
	cout<<"\n~~~~~~~~~~~~~~\n";

	return 0;
} 