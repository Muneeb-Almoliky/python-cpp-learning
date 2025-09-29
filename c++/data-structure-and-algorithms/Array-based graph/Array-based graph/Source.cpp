#include<iostream>
#include<string>
using namespace std;
const int NULL_EDGE=0;
template<class t>
class Queue{

	struct Node{
t item;
Node*next;
	};
	Node*first,*last;
public:
	Queue(){
first=last=NULL;
	}
	bool isempty(){
		return first==NULL;
	}
	void push(t element ){
		if(isempty())
		{
		 Node*newnode=new Node;
         newnode->item=element;
		 first=last=newnode;
		 newnode->next=NULL;
		}
		else{	
Node*newnode=new Node;
newnode->item=element;
newnode->next=NULL;
last->next=newnode;
last=newnode;
		}
	}
	void pop(){

if(isempty())
			cout<<"Queue is empty !";
else{
	Node*cur=first;
	first=first->next;
	delete cur;
}

	}
	void print(){
		if(isempty())
			cout<<"There are no adjacent vertices !";
		else {
			Node*cur=first;
			
			cout<<"The adjacent vertices are : [ ";
			while (cur!=NULL)
			{
				cout<<cur->item<<"  ";
				cur=cur->next;
			}
			cout<<"]\n";

		}



	}
	
};
template<class t>
class Graph_type{
	
	int numvertices;
	int maxvertices;
	t* vertices;
	int edges[50][50];
	bool* marks;
public:
	Graph_type(){
		numvertices=0;
		maxvertices=50;
		vertices=new t[50];
		marks=new bool[50];


	}
	Graph_type(int maxv){
		numvertices=0;
		maxvertices=maxv;
		vertices=new t[maxv];
		marks=new bool[maxv];



	}
	~Graph_type(){
		delete [] vertices;
		delete [] marks;
	}
	
	void Add_vertix(t vertix){
		vertices[numvertices]=vertix;
		for(int index=0;index<=numvertices;index++){
			edges[index][numvertices]=NULL_EDGE;
			edges[numvertices][index]=NULL_EDGE;
		}

		numvertices++;

	}

	int IndexIs(t* vertices, t vertex){
	int index=0;
	while(!(vertex==vertices[index]))
		index++;
	return index;

}
void Add_edges(t fromvertex, t tovertex , int weight){
	int row;
	int col;
	row=IndexIs(vertices,fromvertex);
	col=IndexIs(vertices,tovertex);
	edges[row][col]=weight;

}


int Weight_is(t fromvertex,t tovertex){

	int row;
	int col;
	row=IndexIs(vertices,fromvertex);
	col=IndexIs(vertices,tovertex);
	return edges[row][col];
}
void Get_to_vertices(Queue<t>& adjtvertices,t vertex){
	int fromindex;
	int toindex;
	fromindex=IndexIs(vertices, vertex);
	for(toindex=0;toindex<numvertices;toindex++){
		if (edges[fromindex][toindex]!=NULL_EDGE)
			adjtvertices.push(vertices[toindex]);
	}




}




};






void main(){
	Graph_type<int> Graph;
	Queue<int> adjacent;
	Graph.Add_vertix(1);
	Graph.Add_vertix(2);
	Graph.Add_vertix(3);
	Graph.Add_vertix(4);
	Graph.Add_edges(1,2,10);
	Graph.Add_edges(2,3,10);
	Graph.Add_edges(2,4,10);
	cout<<Graph.Weight_is(1,2)<<endl;
	Graph.Get_to_vertices(adjacent,2);
	adjacent.print();
	cout<<endl;




}