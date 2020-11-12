#include "std_lib_facilities.h"

int main()
try{
	
	int birthyear=2000;

	cout<<showbase; //shows bases
	cout<<birthyear<<"\t- decimal\n"
	<<hex<<birthyear<<"\t- hexadecimal\n"
	<<oct<<birthyear<<"\t- octal\n";

	cout<<dec<<20<<endl; //age in decimal

	int a,b,c,d;
	cin>>a>>oct>>b>>hex>>c>>d;
	cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<endl;

	cout<<noshowbase<<dec;
	
	float x= 1234567.89;
	cout<<x<<"\t- default float\n" //because of the defaultfloat's precision (6 digits) it switches to scientific
	<<fixed<<x<<"\t- fixed\n" //closest to the original number
	<<scientific<<x<<"\t- scientific\n";

	cout<<'|'<<setw(10)<<"Lastname"<<'|'<<setw(10)<<"Firstname"<<'|'<<setw(12)<<"Phone number"<<'|'<<setw(17)<<"e-mail"<<"|\n";
	cout<<'|'<<setw(10)<<"Eros"<<'|'<<setw(10)<<"Istvan"<<'|'<<setw(12)<<"06123455445"<<'|'<<setw(17)<<"eistvan@mail.hu"<<"|\n";
	cout<<'|'<<setw(10)<<"Cserepes"<<'|'<<setw(10)<<"Virag"<<'|'<<setw(12)<<"06708887777"<<'|'<<setw(17)<<"cs.vir@mail.hu"<<"|\n";
	cout<<'|'<<setw(10)<<"Remek"<<'|'<<setw(10)<<"Elek"<<'|'<<setw(12)<<"06402221111"<<'|'<<setw(17)<<"remek@mail.hu"<<"|\n";
	cout<<'|'<<setw(10)<<"Szalmon"<<'|'<<setw(10)<<"Ella"<<'|'<<setw(12)<<"06804567891"<<'|'<<setw(17)<<"szalmon@mail.hu"<<"|\n";
	cout<<'|'<<setw(10)<<"Vincs"<<'|'<<setw(10)<<"Eszter"<<'|'<<setw(12)<<"06105687878"<<'|'<<setw(17)<<"winch@mail.hu"<<"|\n";
	return 0;

} catch (exception& e){
	cout<<e.what()<<endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}