
#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i){
int l=2*i+1;
int r=2*i+2;
int max=i;
if(l<n&&arr[l]<arr[max])
    max=l;
if(r<n&&arr[r]<arr[max])
    max=r;
if(max!=i){
    swap(arr[i],arr[max]);
    heapify(arr, n, max);
}
}
void buildheap(int arr[], int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr, n, i);
    }
}
void heapsort(int arr[], int n){
    buildheap(arr, n);

    for(int i=n-1;i>=0;i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
      
}




void print(int arr[], int size){
     cout<<"The elements of the array are : [ ";
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int main(){
    int arr[6]={1,8,10,9,2,7};
    heapsort(arr,6);
    print(arr,6);
    
}
