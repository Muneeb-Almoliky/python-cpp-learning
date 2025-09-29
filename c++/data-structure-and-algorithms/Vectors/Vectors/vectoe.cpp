#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void main(){

	vector<int>v(5);
	

	int n;
	cout<<"Enter the elements of the array ";
	for(int i=0;i<v.size();i++){
cin>>v[i];
if (i==v.size()-1){
	cout<<"If you want to resize the array, press the size you want : ";
	cout<<"If you want to break, press -1 : ";
	cin>>n;
	if (n==-1)
		break;
	else 
		v.resize(n);}
	}
	//sort(v.begin(),v.end());
	//for(auto it:v){
	//cout<<it<<" ";
	//}
	cout<<endl;
	reverse(v.begin(),v.end());
	for(auto it:v){
	cout<<it<<" ";
	}
	cout<<endl;
	cout<<*min_element(v.begin(),v.end());
	cout<<endl;
	cout<<*max_element(v.begin(),v.end());
	cout<<endl;
	auto it=minmax(v.begin(),v.end());
	cout<<*it.first<<endl;
	cout<<*it.second<<endl;


}