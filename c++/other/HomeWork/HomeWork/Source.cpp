#include <iostream>
using namespace std;
#define SIZE 5
void insert(double a[]); 
void print (double A[]); 
void deleteItem(double A[],double item);
double getMax (double A[]);
double getSum(double A[]);
double getMin (double A[]);
//HOMEWORK TO NEXT LAB
double getTwoMax (double A[]);
double getSubOfMinMax (double A[]); 
void insert2(double arr[][SIZE], int row){ 

	cout<<"\n enter the data to the array \n";
	for (int i = 0; i < row; i++) { 

		for (int j=0; j < SIZE; j++){
			cin>>arr[i][j];
			}}
	cout<<"\n Insertion completed \n"; 
	}

void print2(double arr[][SIZE], int row){
	cout<<"\n the element of the array \n";
	for (int i = 0; i < row; i++) {
		for (int j=0; j< SIZE; j++){ 
			cout<< arr[i][j]<<" " ;
			}
		cout<<endl; 
		}
	cout<<"\n Insertion completed \n";
	}

double maxOfDiagonal (double arr[][SIZE], int row){ 
	cout<<"\n getting the maximum element of the array diagonal\n";
	double max=arr[0][0];
	for (int i = 0; i < row; i++) { 
		for (int j=0; j < SIZE; j++)  {
			if (i==j){
				if (arr[i][j]>max) { 
					max=arr[i][j];
					} 
				}
			}
		}
	return max;
	} 


double maxofPrimaryDiagonal (double arr[][SIZE], int row) {
	double min; 

	return min;
	}


void deleteItem2(double arr[][SIZE], int row, double item){
	cout<<"\n trying to delete element from the array ...... \n"; 
	bool found=false;
	int rowIndex, colIndex;
	for (int i = 0; i < row; i++){ 
		for (int j = 0; j < SIZE; j++){
			if (arr[i][j]==item){
				found=true; 
				rowIndex=i; 
				colIndex=j; 
				arr[i][j]=-1; 
				}}} 
	if (found){
		for (int i = colIndex; i < SIZE-1; i++){
			arr[rowIndex][i]=arr[rowIndex][i+1]; 
			}

		arr[rowIndex][SIZE-1]=-1; 

		cout<<"\n the item has been removed successfully \n"; 
		}
	else {
		cout<<"\n the item is not found \n"; }
	cout<<"\n Insertion completed \n";
	}
struct Student{ 
	string Name;
	int ID; 
	// variable fields can be accessed from outside 
	long PhoneNumber;
	string Department; };     


void Lectures(){
	int choice;
	cout<<"These are the lectures programs \n";
	cout<<"For program number 1, press 1 \n";
	cout<<"For program number 2, press 2 \n";
	cout<<"To exit the program, press 0 \n";

	cout<<"Enter your choice : ";
	cin>>choice;
	switch (choice)
		{
		case 1:
			double arr[SIZE]; 
			insert (arr); 
			print (arr); 
			double item; 
			cout<<"\n enter element to delete \t"; cin>>item;
			deleteItem(arr, item);
			print(arr);

			break;

		case 2:

			double myArray[SIZE][SIZE];
			insert2 (myArray,SIZE); 
			print2 (myArray, SIZE);
			double number; 
			cout<<"\n enter an element to delete from array \n"; 
			cin>>number; 
			deleteItem2(myArray, SIZE, number);
			cout<<"\n the array element after deleting item is \n";
			print2(myArray, SIZE); 
			cout<<"\n the max element of main diagonal is "<<maxOfDiagonal(myArray, SIZE);

			break;

		case 3:


			break;
		case 4:			
			 
			

			break;
		default:
			break;
		}
	}
void Homework(){


	}



int main(){
	int choice;
	cout<<"Welcome to our program\n";
	cout<<"To go to the lectures programs, press 1 \n";
	cout<<"To go to the homework programs, press 2 \n";
	cout<<"To exit the program, press 0 \n";
	
	do 
	{
	cout<<"Enter your choice : ";
	cin>>choice;
	switch (choice)
		{
		case 1:
			Lectures();
			break;
		case 2:


			break;
			

		default:
			cout<<"Invalid choice ";
			break;
		}
	} while (choice!=0);
	}

void insert (double a[]){ 
	cout<<"\n enter the element of the array \n"; 
	for (int i = 0; i < SIZE; i++)
		{ cin>>a [i]; } }
void print (double a[]){ 
	cout<<"\n the element of the array are \n"; 
	for (int i = 0; i < SIZE; i++){ 
		if(a[i]!=-1) 
			cout<<a [i]<<" "; }}

void deleteItem(double A[],double item) {
	// first search if the element is found 
	bool found=false;
	int index; 
	for (int i = 0; i < SIZE; i++){ 

		if(A[i]=item) 
			{ found=true;
		index=i; 
		A[i]=-1;

		// make value -1 
		// what changes to be made to skipp this value
		break;     }}
	if(found) { 
		for (int i= index; i< SIZE-1; i++){ 
			A[i]=A[i+1];} 
		A[SIZE-1]=-1; 
		cout<<"\n deletion successed \n"; }
	else{ 
		cout<<"\n deletion failed \n"; } }

double getMax (double A[])
	{ double max=A[0];
//take the first
for (int i = 0; i < SIZE; i++)
	{ if (A[i]>max) 
	{ max=A[i];
	} } 
return max; } 

double getSum (double A[]){ 
	double sum=0;
	//take the first 
	for (int i = 0; i < SIZE; i++) 
		{ sum+=A[i]; 
		} return sum; } 
double getMin (double A[]){ 
	double min=A[0]; 
	//take the first 
	for (int i = 0; i < SIZE; i++) 
		{ if (A[i] <min) 
		{ min=A[i]; 
		} } 
	return min;
	}




