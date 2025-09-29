// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include<iostream>
#include<string>
using namespace std; 
const int maxsize=100;
class stack
{
private:
	int top;
    int	item[maxsize];
public:
	stack(){
		top=-1;
	}
	void push(int element)
	{ 
		if (top=maxsize-1)
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
		if (isEmpty)
		{
			cout<<" stack is empty ";
		}
		else 
		{
		top--;
		}

	}
	void pop(int&element)
	{
		if (isEmpty)
		{
			cout<<" stack is empty ";
		}
		else 
		{
			element=item[top];
		top--;
		}
	}
	void get_top(int&stacktop)
	{
		if (isEmpty)
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
			for(int i=0;i<top+1;i++)
			{
				cout<<item[i]<<" ";
			}
			cout<<"]";
			cout<<endl;

		}





};

int main()
{
	//cout<<"Hello world\n";
	stack s;
	s.push(5);
	s.push(10);
	s.push(20);
	s.push(15);
	s.push(30);
	s.print();


	system("Pause");
	return 0;
}

