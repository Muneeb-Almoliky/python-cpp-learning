#include<iostream>
#include<cctype>
#include<fstream>
#include<iomanip>
#include<sstring>
using namespace std;

int main()
{
	string m="name";
	int j=3;
	string n=m.substr(0,j);
	cout<<n;
	ofstream file("file.txt");
	double x=123.4567;
	file<<setprecision(2)<<x;
	
	istringstream strm;
	strm.str("may 24, 2003");
	string month;
	int day;
	string comma;
	int year;
	strm>>month>>day>>comma>>year;
	cout<<month<<day<<year;
	
}