# include<iostream>
# define rows 3
# define coloums 3
using namespace std;

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
	int Row=-1;

	for (int i=0;i<rows;i++)
		{
		for (int j=0;j<coloums;j++)
			{
			if (arr[i][j]==element){
				Row=i;
				break;
				}

			}
		
		}
	return Row;
	}

void Delete (int arr[][coloums], int element){
	int row=Search(arr, element);
	if (row!=-1){
		for (int j=0;j<coloums;j++)
		{
	     if (arr[row][j]==element)
		 {
			for(int k=j; k<coloums; k++){
			arr[row][k]=arr[row][k+1];}
			for(int z=row; z<rows; z++){
            arr[z][coloums-1]=arr[z+1][coloums-1];
			}	
		break;
		 }
		
		}
	arr[rows-1][coloums-1]=0;
		}
		else{

			cout<<"The number is not found!\n";
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





int main (){

	int array[rows][coloums], x;
	insert(array);
	print(array);
	cout<<"Enter the element you want to delete : ";
	cin>>x;
	Delete(array, x);
	print(array);

    return 0;

	}