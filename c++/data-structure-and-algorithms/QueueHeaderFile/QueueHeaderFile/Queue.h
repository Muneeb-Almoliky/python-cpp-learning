
#include<iostream>

template<class t>
class LinkedQueue{

	struct Node{
t item;
Node*next;
	};
	Node*first,*last;
public:
	LinkedQueue(){
first=last=NULL;
	}
	bool isempty(){
		return first==NULL;
	}
	void push(t element ){
		if(isempty())
		{
		 Node*newnode=new Node;
         newnode->item=element;
		 first=last=newnode;
		 newnode->next=NULL;
		}
		else{	
Node*newnode=new Node;
newnode->item=element;
newnode->next=NULL;
last->next=newnode;
last=newnode;
		}
	}
	void pop(){

if(isempty())
			cout<<"Queue is empty !";
else{
	Node*cur=first;
	first=first->next;
	delete cur;
}

	}
	void print(){
		if(isempty())
			cout<<"Queue is empty !";
		else {
			Node*cur=first;
			cout<<"The Queue elements are : [ ";
			while (cur!=NULL)
			{
				cout<<cur->item<<" ";
				cur=cur->next;
			}
			cout<<"]\n";

		}



	}
	
};