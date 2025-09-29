#include<iostream>
#include<string>
using namespace std;
class student{
	string name;
	int age;
	string gender;
public:
	student(){

	}
	student(string n,int a,string g){
		name=n;
		age=a;
		gender=g;
	}

	
	friend void print(student p);
	friend class printclass;
	};

void print(student s){
	cout<<"name = "<<s.name<<endl<<"age = "<<s.age<<endl<<"gender = "<<s.gender<<endl;
}
class printclass{
public:
void print(student s){
	cout<<"The student data is :\n";
	cout<<"name = "<<s.name<<endl<<"age = "<<s.age<<endl<<"gender = "<<s.gender<<endl;
}

};


void main(){
	student p("Muneeb",21,"Male");
	print(p);
	printclass s;
	s.print(p);



}