#include<iostream>
using namespace std;

bool search(int arr[],int value,int start,int end){

	if(value==arr[start])
		return true;
	else if (start==end)
		return false;
	else 
		return search(arr,value,start+1,end);


}
void fun(int*&ptr){
	ptr=new int;

	*ptr=4;
	
}
void main(){
	/*int arr[]={1,2,3,4,5};
	int x=5,y=9;
	cout<<search(arr,y,0,x)<<endl;
*/
	int c=5;
	int* ptr=&c;
	cout<<ptr<<endl;
	fun(ptr);
	cout<<ptr<<endl;
	cout<<c<<endl;
	*ptr=3;
	cout<<c<<endl;
}