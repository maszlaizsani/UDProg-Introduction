#include "std_lib_facilities.h"

int main()
{
	double x=0; double y=0;
	while (cin>>x>>y)
	{
		cout<<"x="<<x<<"\t y="<<y<<endl;
		if (x>y)
			cout<<"The larger value is "<<x<<"."<<endl;
		if (x<y)
			cout<<"The smaller value is "<<y<<"."<<endl;
		if (x==y)
			cout<<"The numbers are equal."<<endl;
		if(abs(x-y)<=0.01)
			cout<<"Almost equal."<<endl;

	}


	return 0;
} 