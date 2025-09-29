#include<iostream>
using namespace std;
void merge1(int arr[], int l, int m, int r){
    int i , j , k;
    int n1=m-l+1;
    int n2=r-m;
    int* L=new int[n1+1];
    int* R=new int[n2+1];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    L[n1]=10000;
    R[n2]=10000;
    
    i=j=0;
    for(k=l;k<=r;k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
    }
}
void merge(int arr[], int l, int m, int r){
    int i , j , k;
    int n1=m-l+1;
    int n2=r-m;
    int* L=new int[n1];
    int* R=new int[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];

    i=j=0;
    k=l;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;

    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }


}
void merge_sort(int arr[], int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        merge_sort( arr,l ,m );
        merge_sort(arr,m+1, r );

        merge(arr, l, m, r);
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
    
    merge_sort(arr,0,6);
    print(arr,6);
}