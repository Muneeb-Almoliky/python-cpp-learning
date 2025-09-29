
#include<iostream>
using namespace std;
//const int Maxsize=100;

class arrayQueuetype{
int last;
int first;
int length;
int *arr;
int Maxsize;
public:
	arrayQueuetype(int size){
		if(size<=0)
		{Maxsize=100;}
	else 
			{Maxsize=size;}

first=0;
arr=new int[Maxsize];
last=Maxsize-1;
length=0;
	}
bool isempty(){
return length==0;
}
bool isfull(){
return length==Maxsize;
}
void addQueue(int element){

if(isfull()){
	cout<<"Queue is full !";
}
else {
last=(last+1)%Maxsize;
arr[last]=element;
length++;
}

}
void deleteQueue(){
if(isempty()){
	cout<<"Queue is empty !";
}
else{
	first=(first+1)%Maxsize;
	length--;
}

}
int firstQueue(){
	if(isempty())
	{
cout<<"Queue is empty !";
	}
	else
return arr[first];
}
int lastQueue(){

return arr[last];
}
void print(){
	if(!isempty()){
	cout<<"[ ";
	for(int i=first;i!=(last+1);i=(i+1)%Maxsize)
	{
		cout<<arr[i]<<" ";

	}
	cout<<"]"<<endl;
}

	else {
		cout<<"Queue is empty !";}
}
int Queuesearch(int element){
	int pos=-1;
	for(int i=first;i!=last;i=(i+1)%Maxsize)
	{
		if(arr[i]==element){
			pos=i;
			break;
		}
		if(pos==-1)
		{
			if(arr[last]==element)
				pos=last;
		}
		else
			cout<<"Queue is empty !";
		return pos;
	}



}



};


void main(){
arrayQueuetype Q1(4);
Q1.addQueue(1);
Q1.addQueue(2);
Q1.addQueue(2);
Q1.addQueue(2);
Q1.print();


}