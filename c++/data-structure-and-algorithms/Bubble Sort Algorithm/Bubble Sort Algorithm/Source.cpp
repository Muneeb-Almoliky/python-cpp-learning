#include<iostream>
using namespace std;
void Bubble_Sort(int arr[],int n){
	bool flag=true;
	int c=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]<arr[j+1]){
             swap(arr[j],arr[j+1]);
			 flag=false;
			}
			if(flag==true)
				break;

		}
		c++;
	}
	cout<<"#number of rounds : "<<c<<endl;
}
void print(int arr[],int n){
	cout<<"[ ";
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";

}
cout<<"]";




}


void main(){
	int array[]={5,9,4,0,3,1,2,7,8};
	int x=sizeof(array)/sizeof(array[0]);
	Bubble_Sort(array,x);
	print(array,x);

}