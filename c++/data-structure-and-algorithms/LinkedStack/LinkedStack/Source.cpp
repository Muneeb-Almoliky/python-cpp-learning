#include<iostream>
using namespace std;
template<class t>
class stack{

	struct Node{
		t item;
		Node* next;
	};
	Node* top;
public:
	stack(){
top=NULL;
	}
bool isempty(){
	return top==NULL;
}
void push(t element){
	Node* newnode=new Node;
	newnode->item=element;
	if(isempty()){
		top=newnode;
		newnode->next=NULL;}
	else{
newnode->next=top;
top=newnode;
	}
	}
void pop(){
if(isempty())
	cout<<"Stack is empty !";
else{
Node* cur=top;
top=top->next;
delete cur;

}
}
void print(){
if(isempty())
	cout<<"Stack is empty !";
else{
	Node* cur=top;
	cout<<"[ ";
	while (cur!=NULL)
	{
cout<<cur->item<<" ";
cur=cur->next;
	}
	cout<<"]\n";
}
}
};
int main (){
	stack<int>S;
	S.push(1);
	S.push(2);
	S.push(3);
	S.push(4);
	S.print();
	S.pop();
	S.print();
	cout<<"Hello there \n";
	
	system("pause");
	return 0;
}











