#include<iostream>
using namespace std;
#define rows 3
#define coloums 3
int* Convert_2D_to_1D(int arr[][coloums] ){
int OneD_array[rows*coloums];
int index=0;
for(int i=0;i<rows;i++){
    for(int j=0;j<coloums;j++){
        OneD_array[index]=arr[i][j];
        index++;
    }
}

return OneD_array;
}
/*int *Convert_1D_to_2D(int arr[]){                                        
    int TwoD_array[rows][coloums];
    int index=0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<coloums;j++){
            arr[index]=TwoD_array[i][j];
            index++;
        }
    }
    return TwoD_array;
}*/
int* search(int arr[], int number){
int m,*numindex=new int[sizeof(arr)/4];
for(int i=0;i<sizeof(arr)/4;i++){
    if(number == arr[i]){
        numindex[m]=i;
        m++;
    }
    
}
return numindex;
} 

void Delete(int arr[], int num){

int* p=search(arr, num);
for(int i=0; i<sizeof(arr)/4; i++){

}
}
void print (int* arr){
    cout<<"The array elements are : { ";
    for (int i=0;i<9;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<"}";
}
void print_2D(int arr[][coloums] ){
    cout<<"The 2D array elements are : \n";
    for(int i=0;i<rows;i++){
    for(int j=0;j<coloums;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


}


int main (){

int array[rows][coloums];
cout<<"Enter the elements of the array : ";
for(int i=0;i<rows;i++){
    for(int j=0;j<coloums;j++){
        cin>>array[i][j];
    }
}
print_2D(array);

int* OneDarr;
OneDarr=Convert_2D_to_1D(array);
print(OneDarr);



/*int size, number;
cout<<"Enter the size of the array : ";
cin>>size;
int *arr=new int[size];
cout<<"Enter the "<<size<<" elements of the array : ";
for (int i=0;i<size;i++){
    cin>>arr[i];
}
print(arr);
*/
/*cout<<"Enter the element you want to delete : ";
cin>>number;
Delete(arr, number);*/



/*int rows , coloums;
cout<<"Enter the number of rows and coloums : ";
cin>>rows>>coloums;

int **ptr = new int*[rows];
for (int i=0;i<rows;i++){

 ptr[i]=new int[coloums];

}
cout<<"Enter the "<<rows*coloums<<" elements of the array : ";
for (int i=0; i<rows; i++){
    for (int j=0; j<coloums; j++){
        cin>>ptr[i][j];
    }
}
cout<<"The array elements are : { ";
for (int i=0; i<rows; i++){
    for (int j=0; j<coloums; j++){
        cout<<ptr[i][j]<<" ";
    }
}


cout<<"}";*/

return 0;

}