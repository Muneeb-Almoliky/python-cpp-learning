#include<iostream>
using namespace std;
template<class t>
class linkedlist{
struct Node{
	t item;
	Node *next;

};
Node* head,* tail;
int length;
public:
	linkedlist(){
head=tail=NULL;
length=0;
	}
	bool isEmpty(){
    return length==0;
	}
	//This function adds an element at the front of the list
    void addatfront(t value){
		
Node *newnode=new Node;
newnode->item=value;
if(length==0)
		{
			head=tail=newnode;
			newnode->next=NULL;
		}
else{
newnode->next=head;
head=newnode;

}
length++;
	}
	//This function adds an element at the end of the list 
	  void addatend(t value){
		
Node *newnode=new Node;
newnode->item=value;
if(length==0)
		{
			head=tail=newnode;
			newnode->item=NULL;
		}
else{
tail->next=newnode;
newnode->next=NULL;
tail=newnode;
}
length++;
	}
	  //This function adds an element at a given position 
void addatposition(int p,int v){
if(p<0||p>length){
	cout<<"out of range ";
}
else {
Node* newnode=new Node;
newnode->item=v;
Node* cur;
cur=head;
for(int i=0;i<p;i++)
{
cur=cur->next;

}
newnode->next=cur->next;
cur->next=newnode;
length++;




}
}
//This function prints the elelments of the list
void print(){
	Node*current;
	current=head;
	cout<<"[";
	while(current!=NULL){
cout<<current->item<<" ";
current=current->next;
		}
	cout<<"]\n";
}
//This function deletes an element at the front of the list
void deletefront(){
	if(length==0)
		return;
	if(length==1){
delete head;
head=tail=NULL;
length--;
	}
Node* curr=head;
head=head->next;
delete curr;

}
//This function deletes an element at the end of the list
void deleteend(){
Node* pre,*Cur;
Cur=head->next;
pre=head;
while(Cur!=tail){
	pre=Cur;
	Cur=Cur->next;
	}
delete Cur;
pre->next=NULL;
tail=pre;
length--;
}
//This function searches for an element and deletes it
void deleteElement(t element){
if(isEmpty())
	return;
Node* Curr,*Pre;
Curr=head->next;
Pre=head;
while(Curr!=NULL){
if(Curr->item==element)
	break;
Pre=Curr;
Curr=Curr->next;
if(Curr==NULL){
	cout<<"not found ";
}
else{
Pre->next=Curr->next;
if(Curr==tail)
	tail=Pre;
delete Curr;
length--;


}


}
} 
//This function deletes an node at a given position 
void deleteatposition(int po){
	Node* CUR=head;
	Node* PRE=new Node;
	for(int i=0;i<po-1;i++){
		PRE=CUR;
		CUR=CUR->next;
	}
	PRE->next=CUR->next;
	if(CUR==tail){
tail=PRE;
	}
	delete CUR;
	length--;




}
//This function reverses the elements of the list 
void reverse(){
	Node* cur,*pre,*next;
	pre=NULL;
	cur=head;
	next=cur->next;
	while(cur!=NULL){
		next=cur->next;
		cur->next=pre;
		pre=cur;
		cur=next;

	}
	head=pre;



}
//a search function
int search(t element){
Node* cur=head;
int pos=0;
while(cur!=NULL){
	if(cur->item==element){
		return pos;}
	cur=cur->next;
	pos++;

}
return -1;

}







};





int main(){

	linkedlist<int> l;
	l.addatfront(1);
	l.addatfront(2);
	l.addatfront(3);
    l.addatfront(4);
	l.addatend(5);
	l.addatend(5);
	l.addatposition(3,0);
	l.deletefront();
	l.deleteend();
	l.deleteatposition(3);
	l.deleteatposition(4);
	l.print();
	l.reverse();
	l.print();
	cout<<l.search(0)<<endl;
return 0;
}