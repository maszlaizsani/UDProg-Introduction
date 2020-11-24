#include "std_lib_facilities.h"


void print_array10(ostream& os, int* a)
{
	for (int i=0; i<10; i++)
		os<<a[i]<<" ";
	cout<<endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i=0; i<n; i++)
		os<<a[i]<<" ";
	cout<<endl;
}


class my_vector {
	int sz;
	int* elem;
public:
	my_vector(int s) : sz(s), elem{new int[s]} //konstruktor
	{
		for (int i = 0; i < s; ++i) elem[i] = 0; // inicializálás
	}

	my_vector(const my_vector& arg) : sz{arg.sz}, elem{new int[arg.sz]} //másoló konstruktor
	{
		copy(arg.elem, arg.elem+arg.sz, elem);
	}

	~my_vector()
		{ delete[] elem; } //destruktor

	int get(int n) const { return elem[n]; }
	void set(int n, int val) { elem[n] = val; }
	int size() const { return sz; } //méret
};


void print_vector(ostream& os, my_vector (a), int n)
{
	for (int i=0; i<n; i++)
		os<<a.get(i)<<" ";
	cout<<endl;
}


int main()
try{
	//tömbök
	
	int* tomb= new int[10];
	for (int i=0; i<10; i++)
		cout<<tomb[i]<<" ";
	cout<<endl;
	delete[] tomb;

	
	int* tomb2 = new int[10];
	for (int i=0; i<10;i++)
		tomb2[i]=i+100;
	
	print_array10(cout, tomb2);
	
	delete [] tomb2;
	
	
	int* tomb3 = new int[11];
	for (int i=0; i<11;i++)
		tomb3[i]=i+100;

	for (int i=0; i<11; i++)
		cout<<tomb3[i]<<" ";
	cout<<endl;
	
	delete [] tomb3;

	
	int* tomb4 = new int[20];
	for (int i=0; i<20;i++)
		tomb4[i]=i+100;

	print_array(cout,tomb4,20);
	
	delete [] tomb4;
	

	//vektorok

	my_vector v1(10);

	for (int i=0; i<10;i++)
		v1.set(i,100+i);
	for (int i=0; i<10; i++)
		cout<<v1.get(i)<<" ";
	cout<<endl;

	my_vector v2(11);
	for (int i=0; i<11;i++)
		v2.set(i,100+i);
	print_vector(cout,v2,11);

	my_vector v3(20);
	for (int i=0; i<20;i++)
		v3.set(i,100+i);
	print_vector(cout,v3,20);

	return 0;

}catch (exception& e){
	cout<<e.what();
return 1;
}
