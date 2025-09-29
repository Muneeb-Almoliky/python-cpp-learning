#include<iostream>

using namespace std;

class Time
	{
	public:
		Time(){

			hour = 10;

			}
		

	private:
		int hour;
	public:
		 int* gethour(){

			return &hour;

			}

	};





int main(){
	
	Time t;
	
	int* h = t.gethour();
	cout<<*h<<endl;
	*h = 20;
	cout<<*t.gethour()<<endl;
	int x=2;
	int &y=x;
	y=3;
	cout<<x<<endl;

	system("pause");
	}