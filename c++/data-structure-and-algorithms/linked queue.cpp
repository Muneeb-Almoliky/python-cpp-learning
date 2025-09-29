#include<iostream>
using namespace std;
struct Node{
	int item;
	Node *next;
    Node(){
        item=0;
        next=NULL;
    }
    Node(int d){
        item=d;
        next=NULL;
    }
};
struct linkedlist{
Node* tail;
int length;

	linkedlist(){
        tail=NULL;
        length=0;
	}
	bool isEmpty(){
    return length==0;
	}
	//This function adds an element at the front of the list
    void addatfront(int value){
		
Node *newnode=new Node(value);
if(length==0)
		{
			tail=newnode;
			newnode->next=tail;
		}
else{
newnode->next=tail->next;
tail->next=newnode;
}
length++;
	}
	//This function adds an element at the end of the list 
	  void addatend(int value){
		
Node *newnode=new Node(value);
if(length==0)
		{
			tail=newnode;
			newnode->next=tail;
		}
else{

newnode->next=tail->next;
tail->next=newnode;
tail=newnode;
}
length++;
	}
	 
void print(){
    if(tail==NULL){
        cout<<"The list is empty ! \n";
        }
       else{ 
	Node*current;
	current=tail->next;
	cout<<"[";
	do{
    cout<<current->item<<" ";
    current=current->next;		
    }while(current!=tail->next);
    cout<<"]\n";
       }
    }

//This function deletes an element at the front of the list
void deletefront(){
	if(length==0)
		return;
	if(length==1){

tail->next=NULL;
tail=NULL;
length--;
return;
	}
Node* curr=tail->next;
tail->next=tail->next->next;
delete curr;
length--;

}
void deleteatend(){
	if(length==0)
		return;
	if(length==1){
tail->next=NULL;
tail=NULL;
length--;
return;
	}
Node* cur1=tail->next;
while(cur1->next!=tail){
    cur1=cur1->next;
}
Node* cur2=tail;
cur1->next=tail->next;
tail=cur1;
cur2->next=NULL;
delete cur2;
length--;

}
Node* search(int value){
    Node* p=tail;
    do{
        if(p->item==value){
            return p;
        }
        p=p->next;
    }while(p!=tail);
    return NULL;
}
void addafter(int value, Node* n){
    Node* p=search(value);
    if(p!=NULL){
        n->next=p->next;
        p->next=n;
    }
}
void addbefore(int value, Node* n){
    Node* p=tail;
    while(p->next->item!=value){
        p=p->next;
    }
    n->next=p->next;
    p->next=n;

}


};

int main(){
	linkedlist l;
	l.addatfront(1);
	l.addatfront(2);
	l.addatfront(3);
    l.addatfront(4);
    l.print();
	l.addatend(5);
	l.addatend(5);
    l.print();
	l.deletefront();
	l.print();
    l.deleteatend();
    l.print();
    l.addbefore(2, new Node(6));
    l.addafter(1, new Node(7));
    l.print();
	system("pause");

return 0;
}
