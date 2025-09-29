# include<iostream>
using namespace std;
# define rows 3
# define coloums 3

void insert(int arr[][coloums]){
	
	cout<<"Enter the array elements : ";
	for (int i=0;i<rows;i++)
	{
	for (int j=0;j<coloums;j++)
	{
     cin>>arr[i][j];
	}
	}
		

	}
int Search(int arr[][coloums], int element){
	int index=-1;

	for (int i=0;i<rows;i++)
		{
		for (int j=0;j<coloums;j++)
			{
			if (arr[i][j]==element){
				index=i;
				break;
				}

			}
		
		}
	return index;
	}

void Delete (int arr[][coloums], int element){
	int index=Search(arr, element);
	if (index!=-1){
		for (int j=index;j<coloums;j++)
		{
	     if (arr[index][j]==element)
		arr[index][j]=arr[index][j+1];

		}
		arr[index][coloums-1]=0;
		}


	}
void print(int arr[][coloums]){

	cout<<"The array elements are : \n";
	for (int i=0;i<rows;i++)
	{
	for (int j=0;j<coloums;j++)
	{
	cout<<arr[i][j]<<" ";
	}
	cout<<endl;
	}
	
	}





void main (){

	int array[rows][coloums];
	insert(array);
	print(array);
	Delete(array, 2);
	print(array);



	}