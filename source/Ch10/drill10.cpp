#include "std_lib_facilities.h"

struct Point {
	int x,y;
};

vector<Point>original_points;

void get_points()
{
	int x,y;
	while (cin>>x>>y)
		original_points.push_back(Point{x,y});
}

void print_points()
{
	for (int i=0; i<original_points.size();i++)
		cout<<'('<<original_points[i].x<<","<<original_points[i].y<<')'<<endl;

}

void save_points()
{
	ofstream file;
	file.open("mydata.txt");
	for (int i=0; i<original_points.size();i++)
		file<<'('<<original_points[i].x<<","<<original_points[i].y<<')'<<endl;

	file.close();
}

vector<Point>processed_points;

void read_points()
{
	ifstream read;
	read.open("mydata.txt");
	if (!read) cout <<"Can't read mydata.txt\n";
	
	int x1,y1;
	char pt1,comma,pt2;
	while (read>>pt1>>x1>>comma>>y1>>pt2)
		processed_points.push_back(Point{x1,y1});
	
	read.close();
	cout<<"Number of processed elements: "<< processed_points.size()<<" \n";
}

void compare_data()
{
	if (original_points.size()!=processed_points.size())
		cout<<"Something's wrong!\n";
	else
	{
		int n=0;
		for (int i=0; i<original_points.size(); i++)
		{
			if ((original_points[i].x!=processed_points[i].x) || (original_points[i].y!=processed_points[i].y))
			n++;
		}
		if (n>0) cout<<"Something's wrong!\n";
	}
}

int main()
try{

	cout<<"Please input 7 (x,y) pairs!\n";
	get_points();
	
	cout<<"Entered points: \n";
	print_points();
	
	save_points();
	read_points();
	
	cout<<"Original points: \n";
	for (int i=0; i<original_points.size();i++)
		cout<<'('<<original_points[i].x<<","<<original_points[i].y<<')'<<endl;
	
	cout<<"Processed points: \n";
	for (int i=0; i<processed_points.size();i++)
		cout<<'('<<processed_points[i].x<<","<<processed_points[i].y<<')'<<endl;

	compare_data();

	return 0;

} catch (exception& e) {
	cout<<e.what()<<endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}