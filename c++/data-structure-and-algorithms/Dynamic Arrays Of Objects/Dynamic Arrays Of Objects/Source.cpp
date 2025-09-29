#include <iostream>
#include <string>
using namespace std;

class student{

public:
	string name;
	int age;
	
};
student* EnterElements(student* s,int pos,int size){

	for(int i=pos;i<size;i++){
cout<<"Enter the "<<i+1<<" student name : ";
cin>>s[i].name;
cout<<"Enter the "<<i+1<<" student age : ";
cin>>s[i].age;

}
	return s;
}
void print(student* s,int size){

	for(int i=0;i<size;i++){
cout<<"The "<<i+1<<" student name : "<<s[i].name<<endl;
cout<<"The "<<i+1<<" student age : "<<s[i].age<<endl;

}

}


int main(){
	student* students;
	int size;
	cout<<"Enter the number of students : ";
	cin>>size;

	students=new student[size];

	/*for(int i=0;i<size;i++){
		cout<<"The "<<i+1<<" student name : ";
		cin>>students[i].name;
		cout<<"The "<<i+1<<" student age : ";
		cin>>students[i].age;
		

	}*/
	EnterElements(students,0,size);
	char choice;
	cout<<"Do you want a bigger array ? y/n?\n";
	cin>>choice;
	if(choice=='n'||choice=='N')
	{


		delete [] students;
		return 0;
	}
	int newsize;
	cout<<"Enter the new size: ";
	cin>>newsize;

	student* newstudents=new student[newsize];

	for(int i=0;i<size;i++){
		newstudents[i]=students[i];
	}

	delete [] students;
	students=newstudents;
	/*for(int i=size;i<newsize;i++){

		cout<<"The "<<i+1<<" student name : ";
		cin>>students[i].name;
		cout<<"The "<<i+1<<" student age : ";
		cin>>students[i].age;
		cout<<endl;
	}*/
	EnterElements(students,size,newsize);

	print(students,newsize);


	



}