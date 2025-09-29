
#include <iostream>
using namespace std;
template<class T>
class linkedlist{
struct Node{
	T item;
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
    void addatfront(T value){
		
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
	  void addatend(T value){
		
Node *newnode=new Node;
newnode->item=value;
if(length==0)
		{
			head=tail=newnode;
			newnode->next=NULL;
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
	Node* current;
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
void deleteElement(T element){
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
int search(T element){
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

template<class t>
class Graph{

	int num;
	/*struct Node;
	struct Edge{

int index;
Node* next;


	};*/
	
	
	t data;
	
	
	
	char* vert;
	linkedlist<char> *vertex;
public:
	Graph (int ver){
		num=0;
		vertex=new linkedlist<char>[ver];
		vert=new t[ver];
	}
	void Add_Ver(t vertex){
		vert[num]=vertex;
		num++;
	}
	void Add_Edge(int source,int destination){

		vertex[source].addatend(vert[destination]);
		
	}

void print(){

	for(int i=0;i<num;i++){

		
		cout<<" the adjacent vertices of "<<vert[i]<<" are : ";
		vertex[i].print();
		cout<<endl;
	}

	


}













};


void main(){
	
	Graph<char> G(5);
	G.Add_Ver('A');
	G.Add_Ver('B');
	G.Add_Ver('C');
	G.Add_Ver('D');
	G.Add_Ver('D');
	G.Add_Edge(0,1);
	G.Add_Edge(1,0);
	G.Add_Edge(2,3);
	G.Add_Edge(4,2);
	G.Add_Edge(3,4);
	G.Add_Edge(1,3);
	G.print();






 
}