#include <iostream>
using namespace std;
class Node {
public:
	int Value;
	Node* Next;
};
void printlist(Node* n){
	cout<<"[";
while(n!=NULL){
cout<<n->Value<<" ";
n=n->Next;
}
cout<<"]"<<endl;
}
// a function that inserts an element at the front of a linked list
void insertatthefront(Node*&head,int newvalue){
	//1.prepare a new Node 
	Node* newnode=new Node;
	newnode->Value=newvalue;
    //2.put it in front of the current head 
	newnode->Next=head;
	//3.move head of the list to point to the new Node 
	
	head=newnode;
}
void insertattheend(Node**head,int newvalue){
    //1.prepare a new node 
	Node* newnode=new Node;
	newnode->Value=newvalue;
	newnode->Next=NULL;
    //2.if linked list is empty , new node will be a head node 
	if(*head==NULL){
		*head=newnode;
	}
	//3.find the last node 
	Node* last=*head;
	while(last->Next!=NULL)
	{
		last=last->Next;
	}
	//4.insert new node after the last node (at the end)
	last->Next=newnode;
}
void insertafter(Node*previous,int newvalue){
	//1.check if previous node is NULL
	if (previous==NULL)
	{
		cout<<"previous can not be NULL";
		return;}
	//2.prepare a new node 
	Node* newnode=new Node;
	newnode->Value=newvalue;
	//3.insert new node after privious
	newnode->Next=previous->Next;
	previous->Next=newnode;
}
int main()
{
	Node* head=new Node();
	Node* second=new Node();
	Node* third=new Node();
	head->Value=1;
	head->Next=second;
	second->Value=2;
	second->Next=third;
	third->Value=3;
	third->Next=NULL;
	printlist(head);
	insertatthefront(head,-1);
	printlist(head);
	insertattheend(&head,4);
	printlist(head);
	insertafter(second,-1);
	printlist(head);
	system("pause");
	return 0;


}

