#include "std_lib_facilities.h"


vector<int>gv(10);

void f(vector<int>a)
{
	vector<int>lv;
	for (int i=0; i<a.size(); i++)
		lv.push_back(a[i]);

	cout<<"Elements of lv: \n";
	for (int i=0; i<lv.size(); i++)
		cout<<lv[i]<<" ";

	cout<<endl;
	
	vector<int>lv2;
	lv2=a;
	
	cout<<"Elements of lv2: \n";
	for (int i=0; i<lv2.size(); i++)
		cout<<lv2[i]<<" ";
	cout<<endl;
}

int main()
try{
	
	gv[0]=1;
	for(int i=1; i<10; i++) //gv initialization
		gv[i]=gv[i-1]*2;

	f(gv);

	vector<int>vv{1,2*1,3*2*1,4*3*2*1,5*4*3*2*1,6*5*4*3*2*1,7*6*5*4*3*2*1,8*7*6*5*4*3*2*1,9*8*7*6*5*4*3*2*1,10*9*8*7*6*5*4*3*2*1};
	f(vv);

	return 0;
}catch (exception& e){
	cout<<e.what()<<endl;
return 1;
}
