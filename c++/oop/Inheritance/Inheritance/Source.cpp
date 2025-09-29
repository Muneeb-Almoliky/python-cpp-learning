#include<iostream>
using namespace std;

class base{
	int x;
public:
	base(){
		x=0;
		cout<<"base default constructor \n";

	}
};
class derived:public base
{
int y;
public:
	derived(){
y=0;
cout<<"derived default constructor \n";
	}
derived(int n){
y=n;
cout<<"derived parameterized constructor \n";

}



};
void main (){
	base b;
	derived c;
	derived d(1);




}