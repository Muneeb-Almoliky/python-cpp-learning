#include<iostream>
using namespace std;
template<class t>
class TreeType{

struct TreeNode
{
t info;
TreeNode* Left;
TreeNode* Right;
};
TreeNode* root;

public:
	TreeType(){
		root=NULL;
	}
	~TreeType(){    //a destructor to deallocate memory
     Destroy(root);
	}

	void   Destroy(TreeNode*& tree){
		if(tree!=NULL){
			Destroy(tree->Left);
			Destroy(tree->Right);
			delete tree;
		}

	}
	
	

	bool isEmpty(){
return root==0;
	}
	int count(TreeNode* tree){
		if(tree==NULL)
			return 0;
		else 
			return count(tree->Right)+count(tree->Left)+1;
	}
	int getlength(){
		return count(root);
	}
void insertelement(t element){
	insert(root,element);
}
void insert(TreeNode*& tree,t element){
	
	if(tree==NULL)
	{
		tree=new TreeNode;
		tree->Right=NULL;
		tree->Left=NULL;
		tree->info=element;
	}
	else if(element<tree->info)
		insert(tree->Left,element);
	else 
		insert(tree->Right,element);
	
}
void Getpredeccesor(TreeNode* tree,t& data){
while(tree->Right!=NULL)
	tree=tree->Right;
data=tree->info;
}
void DeleteNode(TreeNode*& tree){

	t data;
	TreeNode* tempPtr=tree;
	if(tree->Left==NULL)
	{
		tree=tree->Right;
		delete tempPtr;
	}
	else if(tree->Right==NULL)
	{
        tree=tree->Left;
		delete tempPtr;
	}

	else {

		Getpredeccesor(tree->Left,data);
		tree->info=data;
		Delete(tree->Left,data);

	}



}
void Delete(TreeNode*& tree,t item)
{
	if(item<tree->info)
		Delete(tree->Left,item);
	else if (item>tree->info)
		Delete(tree->Right,item);
	else 
		DeleteNode(tree);

}
void DeleteItem(t element){
	Delete(root,element);
}
 void search(t& item,bool& found){
	 
	 searchelement(item,root,found);
 
	 
 }
 void searchelement(t& item,TreeNode* tree,bool& found){

if(tree==NULL)
	found=false;
else if (item<tree->info){
	searchelement(item,tree->Left,found);
}
else if (item>tree->info){
	searchelement(item,tree->Right,found);
}
else {
item=tree->info;
found=true;
}

 }
void Print(){
print(root);
}
void print(TreeNode* tree){ //inorder traversal
	if(tree!=NULL){
print(tree->Left);
cout<<tree->info<<" ";
print(tree->Right);
}


}
/*void printpreorder(TreeNode* tree){ //preorder traversal
	if(tree!=NULL){
cout<<tree->info<<" ";
print(tree->Left);
print(tree->Right);
}
}			

void printpostorder(TreeNode* tree){ //postorder traversal
	if(tree!=NULL){

print(tree->Left);
print(tree->Right);
cout<<tree->info<<" ";
}
}	*/		





};

	 
void main(){
	TreeType<int> tree;
	tree.insertelement(5);
	tree.insertelement(9);
	tree.insertelement(7);
	tree.insertelement(3);
	tree.insertelement(8);
	tree.insertelement(12);
	tree.insertelement(6);
	tree.insertelement(4);
	tree.insertelement(20);
	cout<<"[ ";
	tree.Print();
	cout<<"]\n";
	bool found;
	int x,y;
	cout<<"Enter the number you want to search ";
	cin>>x;
	tree.search(x,found);
	if (found==true)
		cout<<"Number is found \n";
	else
	cout<<"Number is not found \n";
	cout<<"The length is : ";
	cout<<tree.getlength()<<endl;
	cout<<"Enter the element you want to delete : ";
	cin>>y;
	tree.DeleteItem(y);
	cout<<"The elements after deletion \n";
	cout<<"[ ";
	tree.Print();
	cout<<"]\n";
	cout<<"The length is : ";
	cout<<tree.getlength()<<endl;

	





















}