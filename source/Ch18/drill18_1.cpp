#include "std_lib_facilities.h"

int ga[10]{1,2,4,8,16,32,64,128,256,512};

void f(int a[], int b)
{
	int la[10];
	for (int i=0; i<10; i++) //elemek átmásolása ga-ból la-ba
		la[i]=ga[i];
	
	cout<<"Elements in array la: "<<endl; //la kiíratása
	for (int i=0; i<10; i++)
		cout<<la[i]<<" ";
	cout<<endl;

	int* p=new int[b];
	for (int i=0; i<b; i++)
		p[i]=a[i];

	cout<<"Elements on free store: "<<endl;
	for (int i=0;i<b;i++)
		cout<<p[i]<<" ";
	cout<<endl;
	
	delete [] p;
}

int main()
try{
	
	f(ga,10);

	int aa[10]{1,2*1,3*2*1,4*3*2*1,5*4*3*2*1,6*5*4*3*2*1,7*6*5*4*3*2*1,8*7*6*5*4*3*2*1,9*8*7*6*5*4*3*2*1,10*9*8*7*6*5*4*3*2*1};
	f(aa,10);

	return 0;
}catch (exception& e){
	cout<<e.what();
return 1;
}
