#include <iostream>
using namespace std;
# define Max_Size 10


void insert(int arr[]){

	cout<<"Enter the "<<Max_Size<<" elements of the array \n";

	for (int i=0; i<Max_Size; i++){

		cin>>arr[i];
		

		}

	}

int search(int arr[], int element){

	int index = -1;

	for (int i=0; i<Max_Size; i++){

		if (arr[i]==element){
             index=i;
			 break;
			}
		
		}

	return index;
	}
void Delete(int arr[], int element){
	int i;
	int index=search(arr, element);
	if (index!=-1){
		
		for ( i=index; i<Max_Size-1; i++)
        {
		arr[i]=arr[i+1];
        }
		arr[i]=0;
            }
	else {

		cout<<"Number is not found";
		}
	


	}

void  print(int arr[]){

	cout<<"The array elements are : { ";
	for (int i=0; i<Max_Size; i++)
	{
	cout<<arr[i]<<" ";
	}
	cout<<"}"<<endl;
	}

		

	

	

	
void main(){

	int array[Max_Size];

     insert(array);
     print(array);
	 Delete(array, 2);
	 print(array);







}

