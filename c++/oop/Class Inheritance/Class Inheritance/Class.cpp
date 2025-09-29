#include<iostream>
using namespace std;
#include"Class.h"




void main(){

	rectangle rect;
triangle trgl;
rect.set_value(2,5);
trgl.set_value(2,5);
cout<<rect.area()<<endl;
cout<<trgl.area()<<endl;

}