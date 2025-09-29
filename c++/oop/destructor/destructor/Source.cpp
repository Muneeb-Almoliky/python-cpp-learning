#include <iostream>
using namespace std;
class rectangle
{
private:
	int w,h;
public:
	rectangle():w(0),h(0)
	{
		cout<<w<<" "<<h<<" a rectangle has been created\n";
	}
	rectangle(int n,int m)
	{
		w=n;
		h=m;
		cout<<" a rectangle has been created\n";
		rectangle ob;
	}
	~rectangle()
	{
cout<<w<<" "<<h<<" a rectangle has been deleted\n";
	}









};




void main(){
	rectangle a(1,2),b(3,4);

}