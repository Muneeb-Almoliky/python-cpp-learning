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

