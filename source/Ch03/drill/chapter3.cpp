#include "std_lib_facilities.h"

int main()
{
	string firstname;
	cout << "Enter the name of the person you want to write to:"<<endl;
	cin >> firstname;

	cout << "Dear "<<firstname <<",\n"
	<< "How are you doing these days? It's been forever since we last saw each other."<<endl;
	string friend_name;
	cout << endl;

	cout << "Insert the name of a mutual friend with " << firstname << ":" << endl;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " recently?\n";

	char friend_sex=0;
	cout << "What is the friend's gender? (m/f) \n";
	cin >> friend_sex;

	/*if (friend_sex=='m')
		cout << "If you meet "<< friend_name << ", please tell him to call me."<<endl;
	else cout << "If you meet "<< friend_name << ", please tell her to call me." <<endl;*/

	switch (friend_sex)
	{
	case 'm' : cout<<"If you meet " <<friend_name << ", please tell him to call me.\n"; break;
	case 'f' : cout<<"If you meet " <<friend_name << ", please tell her to call me.\n"; break;
	default: simple_error("Not a recognized gender");
	}
	
	int age;

	cout << "Enter the age of " << firstname << ":"<< endl;
	cin >> age;

	if ((age<=0)||(age>110))
		simple_error("You are just kidding..");
	else cout <<"I've heard you just had a birthday and you are now "<< age << " years old.\n";
	

	if (age<12)
		cout << "Next year you will be " << age+1 << " years old."<<endl;
	if (age==17)
		cout << "You will get to vote next year."<<endl;
	if (age>70)
		cout << "I hope you enjoy retirement."<<endl;


	cout << "Yours sincerely, \n" << "\n" << "\n" << "Zsani\n";

	return 0;

}
