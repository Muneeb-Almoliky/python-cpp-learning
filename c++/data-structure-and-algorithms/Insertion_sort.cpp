#include <iostream>
using namespace std;
void insertion_sort(int arr[], int size){
    int key,j;
    for(int i=1;i<size;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
void print(int arr[], int size){

     cout<<"The elements of the array are : [ ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    
}
int main(){
    int arr[5]={1,8,10,9,2};
    insertion_sort(arr,5);
    print(arr,5);
}
