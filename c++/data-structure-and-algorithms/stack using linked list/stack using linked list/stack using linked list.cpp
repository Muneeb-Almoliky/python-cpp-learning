// stack using linked list.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
template<class t>
class stack{

	struct node
	{
t item;
node *next;
	};

	node *top,*cur;// cur will hold the value of the top later
	public:
	stack (){
		top=NULL;
	}
	void push(t newitem){
		node *newitemptr=new node;
		if (newitemptr==NULL)
		{
			cout<<"stack push can't allocate memory";
		}
		else
		{
		newitemptr->item=newitem;
		newitemptr->next=top;
		top=newitemptr;
		}
	}

	bool isEmpty()
	{
		return top==NULL;
	}
	void pop (){
		if (isEmpty()){
			cout<<"stack is empty on pop ";
		}
		else {
			node *temp=top;
			top=top->next;
			temp=temp->next=NULL;
			delete temp;
		}
		
		}
void pop (t&stacktop){
		if (isEmpty())
			{cout<<"stack is empty on pop ";
		}
		else {
			stacktop=top->item;
			node *temp=top;
			top=top->next;
			temp=temp->next=NULL;
			delete temp;
		}
		}
		void gettop (t&stacktop){
		if (isEmpty())
			{cout<<"stack is empty on gettop ";
		}
		else {
			stacktop=top->item;
			
		}
		}
		void display(){
			cur=top;
			cout<<"\nitems in the stack : ";
			cout<<"[";
				while(cur!=NULL)
				{
					cout<<cur->item<<" ";
					cur=cur->next;// or top=top->next;
				}
			cout<<"]\n";
			/*  or
			while(top!=NULL)
				{
					cout<<top->item<<" ";
					top=top->next;
				}
			*/
			
			}

	};

int main()
{
	stack<int>s;
	s.push(100);
	s.push(200);
	s.push(300);
	s.push(400);
	s.display();
	s.pop();
	s.display();
	int x;
	s.gettop(x);
	cout<<x<<endl;
	system("pause");
	return 0;
}

