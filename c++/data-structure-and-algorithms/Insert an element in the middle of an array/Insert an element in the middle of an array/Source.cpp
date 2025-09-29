#include<iostream>
using namespace std;

void main(){
	int arr[100],n,pos,value;
	cout<<"Enter the number of the elements of the array : ";
	cin>>n;
	cout<<"\nEnter the "<<n<<" elements of the array :\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nEnter the value you want to add : ";
	cin>>value;
	cout<<"\nEnter the position you want to put it in : ";
	cin>>pos;
	cout<<"\nThe array before insertion : [ ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	for(int i=n-1;i>=pos-1;i--){
arr[i+1]=arr[i];
	}
	arr[pos-1]=value;
	cout<<"\nThe array after insertion : [ ";
	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"]\n";
}