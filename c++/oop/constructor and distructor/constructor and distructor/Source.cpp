#include<iostream>
using namespace std;


class triangle
{
private:
	int base;
	int height;
public:
	triangle ()//empty constructor
	{
cout<<"first constructor\n";
base=0;
height=0;

	}
	triangle(int h,int m)//parameteraized constructor
	{
		cout<<"p constructor \n";

		base=h;
		height=m;

	}

	float area()
	{
		return 0.5*base*height;
	}
	void print()
	{
		cout<<"base= "<<base<<endl<<"heightL= "<<height<<endl<<"area= "<<area()<<endl;

	}
};
class student 
{
private:
	char name[20];
	int id;
public:
	student() {
		strcpy(name,"no name");
        id=0;
	}
	student(char n[],int i) {
		cout<<"parameterized constructor \n";
		strcpy(name,n);
		id=i;
		}
	void print ()
	{
		cout<<"name : "<<name<<"\nid : "<<id<<endl;


	}



};
int main(){
	triangle ob1(10,10),ob2;
	ob1.print();
	ob2.print();
    student ob("mohammed",12345);
	ob.print();

	return 0;
}
