#include <iostream>
using namespace std;

template<class type>
class List{

	struct Node{
		type item;
		Node *next,*prev;
	};
	Node*first,*last;
	int count;
public:
	List(){
	first=last=NULL;
	count=0;
		}
	bool isempty(){
		return first==NULL;
		}
	void insertatfirst(type element){
		Node*newnode=new Node;
		newnode->item=element;
		if(count==0){
		first=last=newnode;
		newnode->next=newnode->prev=NULL;
		
		}
		else{
		newnode->prev=NULL;
		newnode->next=first;
		first->prev=newnode;
		first=newnode;
		}
		count++;
	
	}
	void insertatlast(type element){
		Node*newnode=new Node;
		newnode->item=element;
		if(count==0){
		first=last=newnode;
		newnode->next=newnode->prev=NULL;
		
		}
		else{
		newnode->next=NULL;
		newnode->prev=last;
		last->next=newnode;
		last=newnode;
		}
		count++;
	
	}
	void insertatposition(int pos,type element){
		if(pos<0||pos>count)
			cout<<"Out of range ...";
		else{
		Node* newnode=new Node;
		newnode->item=element;
		if(pos==0)
			insertatfirst(element);
		else if(pos==count)
			insertatlast(element);
		else{
		Node*cur=first;
		for(int i=1;i<pos-1;i++){
			cur=cur->next;
		}
		newnode->next=cur->next;
		newnode->prev=cur;
		cur->next->prev=newnode;
		cur->next=newnode;
		count++;
			}
			}
	}
	void deletefirst(){
		if(count==0){
			cout<<"The list is empty !";
		return;}
		else if(count==1){
	
			first=last=NULL;}
		else{
		Node* cur=first;
		first=first->next;
		delete cur;
			}
		}
	void deletelast(){
		if(count==0){
			cout<<"The list is empty !";
		return;}
		else if(count==1){
	
			first=last=NULL;}
		else{
		Node* cur=last;
		last=last->prev;
		delete cur;
			}
	}
	void deleteanelement(type element){
		if(isempty()){
			cout<<"List is empty !";
			return;}
		if(first->item==element){
			deletefirst();
			count--;
		}
		else{
		Node *cur=first->next;
		while(cur!=NULL){
			if(cur->item==element)
				break;
			cur=cur->next;
		}
		if(cur==NULL)
		{
			cout<<"The item is not there !";
			return;
		}
		 else if(cur->next==NULL){
			 deletelast();
			 count--;}
		 else
		 {
			 cur->prev->next=cur->next;
			 cur->next->prev=cur->prev;
			 delete cur;
			 count--;
		
		
		 }
		}
	
	}
	void display(){
		Node*cur=first;
		cout<<"Elements in the list  are ....";
		cout<<"[ ";
		for(int i=0;i<count;i++){
			cout<<cur->item<<" ";
			cur=cur->next;
		}
		cout<<"]\n";
	}
	void reversedisplay(){
		Node*cur=last;
		cout<<"Elements list after reverse ....";
		cout<<"[ ";
		for(int i=0;i<count;i++){
			cout<<cur->item<<" ";
			cur=cur->prev;
		}
		cout<<"]\n";
	}
	int size(){
		return count;
	}



};
int main(){

	List<char> L1;
	L1.insertatfirst('A');
	L1.insertatfirst('B');
	L1.insertatfirst('C');
	L1.display();
	L1.insertatlast('D');
	L1.insertatlast('E');
	L1.display();
	L1.insertatposition(3,'F');
	L1.display();
	L1.reversedisplay();
	cout<<L1.size()<<endl;
	L1.deleteanelement('C');
	L1.display();



	return 0;
}
