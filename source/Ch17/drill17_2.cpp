#include "std_lib_facilities.h"


void print_array(ostream& os, int* a, int n)
{
	for (int i=0; i<n; i++)
		os<<a[i]<<" ";
	cout<<endl;
}



int main()
try{

	int* p1 = new int(7); 
	cout<<"p1: "<<p1<<" "<<*p1<<endl;


	int* p2= new int[7];
	p2[0]=1;
	for (int i=1; i<7; i++)
		p2[i]=p2[i-1]*2;

	cout<<"p2: "<<p2<<" "; print_array(cout,p2,7);


	int* p3=p2;
	
	cout<<"p3 "<<p3<<" "; print_array(cout,p3,7);
	
	p2=p1;
	p2=p3;

	cout<<"p1: "<<p1<<" "<<*p1<<endl;
	cout<<"p2: "<<p2<<" "; print_array(cout,p2,7);

	delete p1; 
	delete [] p3;

	cout<<"~~~~~~~~~~"<<endl;
	
	p1=new int[10]{1,2,4,8,16,32,64,128,256,512};
	p2=new int[10];

	for (int i=0; i<10; i++)
		p2[i]=p1[i];
	cout<<"p2: "<<p2<<" "; print_array(cout,p2,10);

	delete[] p1; delete [] p2;

	//vectors
	vector<int>v1 {1,2,4,8,16,32,64,128,256,512};
	p1=&v1[0];

	vector<int>v2(10);
	p2=&v2[0];

	for (int i=0; i<10; i++)
		v1[i]=v2[i];

	return 0;

}catch (exception& e){
	cout<<e.what();
return 1;
}
