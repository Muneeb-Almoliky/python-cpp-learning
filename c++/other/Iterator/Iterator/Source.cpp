#include<iostream>
#include<vector>
using namespace std;

void main(){
	vector<int> v;
	v[0]=10;
	v[1]=20;
    vector<int> ::iterator it;
	/*for(it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}*/
	v.insert(v.begin(),30);
	v.insert(v.end(),40);
	for(auto it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<endl;
	}

}