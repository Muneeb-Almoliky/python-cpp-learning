#include<iostream>
using namespace std;

class LinkedQueue{
struct Node{
	int item;
	Node* next;

};
Node* first,*last;
int length;
public:
	LinkedQueue(){
first =NULL;
last=NULL;
length=0;
	}
bool isempty(){
return length==0;
}
void AddQueue(int element){
	
	if(isempty()){

first=new Node;
first->item=element;
first->next=NULL;
first=last;
length++;
	}
	else{
Node* newnode =new Node;
newnode->item=element;
newnode->next=NULL;
last->next=newnode;
last=newnode;
length++;
	}
}
void deleteQueue(){
	if (isempty()){
cout<<"Queue is empty !";

	}
	else{
Node *temp=first;
if(first=last){
	first=last=NULL;
	length=0;
}
else{
first=first->next;
temp->next=NULL;
delete temp;
length--;}
	}

}
int getfirst(){
	if(isempty()){
		cout<<"Queue is empty !";
	}
	else{
		return first->item;}

}
int getlast(){
	if(isempty()){
		cout<<"Queue is empty !";
	}
	else{
		return last->item;}
}
void cleanQueue(){
	Node *cur;
	while(first!=NULL){
		cur=first;
		first=first->next;
		delete cur;

	}
	last=NULL;

}
void print(){
	Node* cur=first;
	cout<<"[ ";
while (cur!=NULL){
cout<<cur->item<<" ";
cur=cur->next;
}
cout<<"]\n";



}
int getsize(){

return length;


}


};




void main (){
	LinkedQueue Q1;

	Q1.AddQueue(1);
	Q1.AddQueue(2);
	Q1.print();
    Q1.AddQueue(3);
	cout<<Q1.getfirst();
    Q1.AddQueue(4);
    Q1.AddQueue(5);
    Q1.AddQueue(6);
	




}