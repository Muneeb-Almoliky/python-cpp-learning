#include<string>
#include <iostream>
#include<algorithm>
using namespace std;

class car{
private:
	char name[15];
	char color[10];
	int maxspeed;
	int model;
public:
    void setname(char n[])
	{
    strcpy(name,n);
	}
	void setcolor(char c[])
	{
	strcpy(color,c);
	}
	void setmaxspeed(int s){
maxspeed=s;
	}
	void setmodel(int m){
		model=m;
	}
	string getname(){
return name;
}
	string getcolor(){
return color;
	}
int getmaxspeed(){
return maxspeed;
}
int getmodel(){
	return model;
}
void print(){
	cout<<"name: "<<name<<"\n"<<"color: "<<color<<"\n"<<"maxspeed: "<<maxspeed<<"\n"<<"model: "<<model<<"\n";

}
};







int main (){
	car bmw;
	bmw.setname("BMW");
	bmw.setcolor("red");
	bmw.setmaxspeed(300);
	bmw.setmodel(2017);
	bmw.print();
	system("pause");
	return 0;
}