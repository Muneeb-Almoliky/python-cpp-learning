#include <iostream>
#define size 5
using namespace std;

struct Stack {

	int top,data[size];


	Stack() {
		top=-1;
	}
	void push(int item) {
		if (isFull()) {
			cout << "\nStack overflow\n";
			return;
		}
		data[++top] = item;
		
		
	}
	int pop() {
		if (isEmpty()) {
			cout << "\nStack underflow";
		}
		else{
		return data[top--] ;
		}
	}
	bool isEmpty() { return (top==-1); }
	bool isFull() { return top==size-1; }
	void print(){

		if(!isEmpty()){
		for (int i=top;i>=0;i--)
			{
				cout << data[i] << "    ";
			}
			cout << endl;
		}
	
	
	}


};

int main(){
  Stack St;
  St.push(1);
  St.push(2);
  St.push(3);
  St.push(4);
  St.push(5);
  St.print();
  St.pop();
  St.pop();
  St.print();
return 0;
}