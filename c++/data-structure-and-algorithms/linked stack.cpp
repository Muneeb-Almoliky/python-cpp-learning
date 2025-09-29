


#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
	node() {
		data = 0;
		next = NULL;
	}
	node(int d) {
		data = d;
		next = NULL;
	}
};

struct LinkedStack {
	node* Head;
	LinkedStack() {
		Head = NULL;
	}
	bool Empty() {
		return Head == NULL;
	}	
	void push(node* n) {
		if (Empty()) {
			Head = n;
			return;
		}
		node* temp = Head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = n;
	}
	int pop() {
		node* temp = Head;
		int data = 0;
		if (!Empty()) {
			while (temp->next->next != NULL) {
				temp = temp->next;
			}

			 data = temp->next->data;
			node* d = temp->next;
			temp->next = NULL;
			delete d;
			return data;
		}
		return data;
	}
	void print() {
		node* temp = Head;
		while (temp != NULL) {
			cout << temp->data << "  ";
			temp = temp->next;
		}
		cout << endl;
	}
};
int main()
{
	LinkedStack S;
	S.push(new node(1));
	S.push(new node(2));
	S.push(new node(3));
	S.print();
	S.push(new node(4));
	S.push(new node(5));
	S.print();
	S.pop();
	S.print();
	S.pop();
	S.print();
}
