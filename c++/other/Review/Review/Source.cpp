#include<iostream>
using namespace std;
template <class T>
class Linkedlist{

	struct Node{
		T item;
		Node* pre;
		Node* next;
		};
	Node* first,*last;
public:
	Linkedlist(){
		first=last=NULL;
		}
bool isEmpty(){
return first==NULL;
	}
void Add_at_first(T element){
	Node* newnode=new Node;
	newnode->item=element;
	if (isEmpty()){
		first=last=newnode;
		newnode->pre=NULL;
		newnode->next=NULL;
		}
	else {
		newnode->pre=NULL;
		newnode->next=first;
		first->pre=newnode;
		
		first=newnode;
		
	
		}

	}
	void Add_at_last(T element){
	Node* newnode=new Node;
	newnode->item=element;
	if (isEmpty()){
		first=last=newnode;
		newnode->pre=NULL;
		newnode->next=NULL;
		}
	else {
		newnode->next=NULL;
		newnode->pre=last;
		last->next=newnode;
		
		last=newnode;
       
		
		
		}

	}
/*void Deque(){
	if(isEmpty()){
		cout<<"You can't pop. Stack is empty!"<<endl;
		}
	else{
		Node* cur=first;
		first=first->next;
		delete cur;
		}
	}
*/
void delete_at_first(){
	if(isEmpty()){
		cout<<"You can't pop. Stack is empty!"<<endl;
		}
	else{
		Node* cur=first;
		first=first->next;
		delete cur;
		}
}
void deletelast(){
	if(isEmpty()){
		cout<<"The list is empty !";
	return;}
	else{
    Node* cur=last;
    last=last->pre;
    delete cur;
	}
}
void print(){
	if (isEmpty()){
		cout<<"The stack is empty!\n";

		}
	else{
	Node* cur=first;
	cout<<"{ ";
	while(cur!=NULL){
		cout<<cur->item<<" ";
        cur=cur->next;		}
	cout<<"}";
	}
	cout<<endl;

	}
	};






int main(){
	Linkedlist<int> S;//Perfect
	
	
	S.Add_at_first(1);
	S.Add_at_first(2);
	S.Add_at_first(3);
	S.Add_at_last(4);
	S.Add_at_last(5);
	cout<<"The elements after the dequeue\n";
	S.print();
	S.deletelast();  
	S.print();
	S.Add_at_first(6);
	cout<<"The Queue after adding the enqueue\n";
	S.print();
	S.delete_at_first(); 
	S.print();



	return 0;
	}