// Array-based Stack implementation.cpp : Defines the entry point for the console application.
//

// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std; 
const int maxsize=100;
template <class t>   // so that it can recieve any data type
class stack
{
private:
	int top;
	t	item[maxsize];
public:
	stack(){
		top=-1;
	}
	void push(t element)
	{ 
		if (top==maxsize-1)
		{
			cout<<" stack is full ";
		}
		else
		{
		top++;
		item[top]=element;
		}

	}
	bool isEmpty()
	{
	return top<0;
	}
	void pop()
	{
		if (isEmpty())
		{
			cout<<" stack is empty ";
		}
		else 
		{
		top--;
		}

	}
	void pop(t&element)
	{
		if (isEmpty())
		{
			cout<<" stack is empty ";
		}
		else 
		{
			element=item[top];
		top--;
		}
	}
	void get_top(t&stacktop)
	{
		if (isEmpty())
		{
			cout<<" stack is empty ";
		}
		else 
		{
			stacktop=item[top];
	   cout<<stacktop<<endl;
		}
	}

		void print()
		{
			cout<<"[";
			for(int i=top;i>=0;i--)
			{
				cout<<item[i]<<" ";
			}
			cout<<"]";
			cout<<endl;

		}

};

int main()
{
	stack<char> s;  // we write the data type between the brackets
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	s.print();
	char y;
	s.get_top(y);
    s.pop();
	s.push('e');
	s.print();
	char x;
	s.pop(x);
	s.print();
	cout<<x<<"\n";

	system("Pause");
	return 0;
}