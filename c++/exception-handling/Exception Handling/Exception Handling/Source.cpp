#include<iostream>
using namespace std;
int main(){

	int x=0,y=0;
	cout<<"Enter Value for x and y : ";
	cin>>x>>y;
	try{
		if(x<30)
			throw "x exception";
		if(y==0)	
		throw (50);
			//throw exception();
	cout<<endl<<x/y<<endl;
	}
	//catch(exception e){
	//	cout<<e.what()<<endl;
	//	cout<<" please review your input ! \n";
	//}
	/*catch(int e){
cout<<"Division by Zero !\n";
cout<<"Y must not be Zero \n";

	}*/
	/*catch(const char* msg){
cout<<msg<<endl;
cout<<"X must be greater than 30 \n";
	}*/
	catch(...){  //A general catch block 
cout<<"Unhandeled exception "<<endl;
cout<<"Please contact the system admin \n";
	}
	cout<<"The program continued ";
	cout<<endl<<x+y+100<<endl;
	return 0;


}