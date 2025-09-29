#include<iostream>
using namespace std;
int partition1(int arr[], int l, int h){
    int p=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<=p){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    return i+1;
}

void quick_sort1(int arr[], int l, int h){

    if(l<h){
        int piv=partition1(arr, l, h);
        quick_sort1(arr, l, piv-1);
        quick_sort1(arr, piv+1, h);
    }

}
int partition(int arr[], int l, int h){
    int p=arr[l];
    int i=l;
    int j=h;
    while(i<j){
        do
        {
            i++;
        }while(arr[i]<=p);
        do
        {
            j--;
        }while(arr[j]>p);

        if(i<j)
        swap(arr[i],arr[j]);        
    }
    swap(arr[l], arr[j]);
    return j;
}

void quick_sort(int arr[], int l, int h){

    if(l<h){
        int piv=partition(arr, l, h);
        quick_sort(arr, l, piv);
        quick_sort(arr, piv+1, h);
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
    int arr[6]={1,8,10,9,2,7};
    
    quick_sort(arr,0,6);
    print(arr,6);
    
}








