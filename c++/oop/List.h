#include <iostream>
#include <string>
using namespace std;
template<class type>
class List{

	struct Node{
		type item;
		Node *next,*prev;
	};
	
	Node* first,*last;
	int count;
public:
	List(){
	first=last=NULL;
	count=0;
		}
	bool isempty(){
		return first==NULL;
		}
	void push_front(type element){
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
	void push_back(type element){
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
	void insert_at(int pos,type element){
		if(pos<=0||pos>count+1)
			cout<<"Out of range ...";
		else{
		Node* newnode=new Node;
		newnode->item=element;
		if(pos==1)
			push_front(element);
		else if(pos==count+1)
			push_back(element);
		else{
		Node*cur=first;
		for(int i=1;i<pos-1;i++){
			cur=cur->next;
		}
		newnode->next=cur->next;
		newnode->prev=cur;
		cur->next->prev=newnode;
		cur->next=newnode;
		delete cur;
		count++;
			}
			}
	}
	void deletefirst(){
		if(count==0){
			cout<<"The list is empty !";
		return;}
		else if(count==1){
            Node* cur=first;
			first=last=NULL;
            delete cur;}
		else{
		Node* cur=first;
		first=first->next;
		cur->next=cur->prev=NULL;
		delete cur;
			}
		count--;
		}
	void deletelast(){
		if(count==0){
			cout<<"The list is empty !";
		return;}
		else if(count==1){
			Node* cur = last;	
			first=last=NULL;
			delete cur;
			}
		else{
			Node* cur=last;
			last=last->prev;
			cur->next=cur->prev=NULL;
			delete cur;
			}		
		count--;
	}
	void delete_element(type element){
		if(isempty()){
			cout<<"List is empty !";
			return;}
		if(first->item==element){
			deletefirst();
		}
		else if(last->item==element){
			deletelast();
		}
        else {
		Node *cur=first->next;
		while(cur->next!=NULL){
			if(cur->item==element)
				break;
			cur=cur->next;
		}
		if(cur->next==NULL)
		{			
			cout<<"The item is not there !";
			return;
		}
		 else
		 {
			 cur->prev->next=cur->next;
			 cur->next->prev=cur->prev;
			 cur->next=cur->prev=NULL;
			 delete cur;
			 count--;				
		 }
		}
			
	}
	Node* search(type element){
		
		Node*cur=first;
		while(cur!=NULL){
			
			if(cur->item==element)
				break;
			cur=cur->next;
		}
		
		return cur;
			
	}
	void display(){
		Node*cur=first;
		for(int i=0;i<count;i++){
			cout<<cur->item<<" ";
			cur=cur->next;
		}
		/*while(cur!=NULL){
			cout<<cur->item<<" ";
			cur = cur->next;
		}*/
		cout<<"\n";
	}
	void reversedisplay(){
		Node*cur=last;
		for(int i=0;i<count;i++){
			cout<<cur->item<<" ";
			cur=cur->prev;
		}
		cout<<"\n";
	}
    int chars_count(){
        int char_count=0;
        Node*cur=first;
		for(int i=0;i<count;i++){
			char_count = char_count + cur->item.length();
			cur=cur->next;
		}
        return char_count;
    }
	int size(){
		return count;
	}

};
