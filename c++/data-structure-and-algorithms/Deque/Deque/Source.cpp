#include<iostream>
#include<deque>

using namespace std;

int main(){
	deque<char>d;
	
	d.push_back('e');
	d.push_back('l');
	d.push_back('l');
	d.push_back('o');
	d.push_front('H');
	/*deque<char>::iterator it=d.begin();
	for(;it!=d.end();it++){
cout<<*it;
	}
	cout<<endl;*/
	auto it=d.begin();
	for(;it!=d.end();it++){
cout<<*it;
	}
	cout<<endl;










	return 0;
}