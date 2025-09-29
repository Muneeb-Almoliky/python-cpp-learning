#include <iostream>
#define row 3 
#define col 3
using namespace std;
void convert_2D_to_1D(int arr1[], int arr2[][col]){
	int index=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr1[index++]=arr2[i][j];
		}
	}
}
void convert_1D_to_2D(int arr1[], int arr2[][col]){
	int index=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr2[i][j]=arr1[index++];
		}
	}
}
void insert(int arr[]){

	cout<<"Enter the "<<row*col<<" elements of the array \n";

	for (int i=0; i<row*col; i++){
		cin>>arr[i];
		}

	}

int search(int arr[], int element){

	int index = -1;

	for (int i=0; i<row*col; i++){

		if (arr[i]==element){
             index=i;
			 break;
			}
		
		}

	return index;
	}
void Delete2(int arr2[][col], int number){
	int arr1[row*col];
	int index=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr1[index++]=arr2[i][j];
		}
	}
	for (int i=0; i<row*col; i++){
		if (arr1[i]==number){
            for (int j=i; j<(row*col)-1; j++)
        {
		arr1[j]=arr1[j+1];
        }
		arr1[(row*col)-1]=0;
        i--;
        }	    
    }
	int index1=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			arr2[i][j]=arr1[index1++];
		}
	}	
	
}
void Delete(int arr[], int element){
    for (int i=0; i<row*col; i++){
		if (arr[i]==element){
            for (int j=i; j<(row*col)-1; j++)
        {
		arr[j]=arr[j+1];
        }
		arr[(row*col)-1]=0;
        i--;
        }	    
    }

	}

void  print(int arr[]){

	cout<<"The array elements are : { ";
	for (int i=0; i<row*col; i++)
	 {
	cout<<arr[i]<<" ";
	 }
	 cout<<"}"<<endl;
	}
void print2(int arr[][col]){
	cout<<"The elements of the array are : \n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
}

	

int main(){
	int arr2[row][col], arr1[row*col];
	cout<<"Enter the 2D elements : \n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr2[i][j];
		}
	}
	print2(arr2);
	int number;
	cout<<"Enter the number You want to delete : ";
	cin>>number;
	Delete2(arr2, number);
	/* convert_2D_to_1D(arr1, arr2);
	Delete(arr1, number);
	convert_1D_to_2D(arr1, arr2); */
	print2(arr2);

	 
return 0;


}