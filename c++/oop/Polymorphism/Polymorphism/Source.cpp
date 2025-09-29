#include<iostream>
using namespace std;


class polygon{
protected:
	int width,hieght;
public:
	void set_value(int w,int h){
		width=w;hieght=h;
	}
	virtual float area(void)=0;  //This pure virtual function lets the compiler know that there is a similar function in the subclasses.
       							 //after creating this function , this class becomes an abstract class .
								 //We can't define an object of that class anymore.We can only define pointers of that class

	void printArea(){
		cout<<this->area()<<endl;
		
	} 
};
class rectangle:public polygon{

public:
	float area(){
		return width*hieght;
	}
};
class triangle:public polygon{

public:
	float area(){
return 0.5* width*hieght;
	}
};

void main(){
rectangle rect;
triangle trgl;
polygon* p1,*p2,*p3,*p4;
p1=&rect;
p2=&trgl;
p1->set_value(2,5);
p2->set_value(2,5);
cout<<p1->area()<<endl;
cout<<p2->area()<<endl;
p1->printArea();
p2->printArea();
polygon *p[2]={&rect,&trgl};  //we can also use an array of pointers.
for(int i=0;i<2;i++){
	p[i]->printArea();
}



}