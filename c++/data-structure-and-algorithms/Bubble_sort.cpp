#include <iostream>
using namespace std;
void swap(int& a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void bubble_sort(int arr[], int size){
    bool flag=true;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag)
        break;
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
    bubble_sort(arr,5);
    print(arr,5);
    
}

