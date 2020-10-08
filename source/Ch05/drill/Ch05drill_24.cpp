#include "std_lib_facilities.h"


int main()

try {
	
	double x = 4; 
	double d = 5/(x-2); 
	if (d==x/2+0.5) 
		cout <<"Success!\n";

	return 0;
}

catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
return 1;
}

catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
return 2;
}