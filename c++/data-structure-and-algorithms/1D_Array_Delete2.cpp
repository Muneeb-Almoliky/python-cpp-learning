#include <iostream>
#define Max_Size 10
using namespace std;

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
	int newindex=0;
    for (int i=0; i<Max_Size; i++){

		if (arr[i]!=element){
            arr[newindex]=arr[i];
            newindex++;  
        }
        
    }
    if (newindex!=Max_Size){
    for(int j=Max_Size-1; j>=newindex; j--){
        arr[j]=0;
    }
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
	
int main(){
	 int array[Max_Size], x;
     insert(array);
     print(array);
     cout<<"Enter the element you want to delete : ";
     cin>>x;
	 Delete(array, x);
	 print(array);

return 0;


}