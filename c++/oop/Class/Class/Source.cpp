#include<iostream>
#include<string>
using namespace std;

class student{

public:

	int id;
	string name;

	void set(int num, string N){

		id = num;
		name = N;

		}
	void get(){

		cout<<"The student name is : "<<name<<endl;
		cout<<"The studnet id is : "<<id<<endl;
		}



	};
class Operation{

public:
	Operation(){
		cout<<"Hello "<<endl;
		}
	void factorial(){

		int n, f=1;
		cout<<"Enter the number : ";
		cin>>n;
		for(int i=n;i>=1;i--){
			f = f * i;
			}
		cout<<"The factorial is : "<<f<<endl;

		}
	    void print(){

			 for(int i=0;i<=100;i+=2){
				 cout<<"i = : "<<i;
				 }

			}
		void get(){

			int x;
			cout<<"Enter the value of x : ";
			cin>>x;
			if(x>=0 && x%2==0){
				cout<<"The number is positive and even .\n";
				}
			else if(x<0 && x%2==0){
				cout<<"The number is negaive and even .\n";
				}
			else if(x<0 && x%2!=0){
				cout<<"The number is negaive and odd .\n";
				}
			else{
				cout<<"The number is positive and odd .\n";
				}


			}
		void getA(){
			for (int i=0;i<6;i++){
				cout<<"A ";
				}
			}
		void dig(){

			

			}
		void entervalues(){
			
			}






















































































	};
int main(){

	Operation ob1, ob2;
	//s.factorial();
	

	system("pause");
	return 0;
	}