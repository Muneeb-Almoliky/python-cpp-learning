#include<iostream>
using namespace std;
#define row 7
#define col 7

int main(){
    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col-i];
    }
    int elements=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<(col-i);j++){
            elements+=7;
            if(j==0){
                arr[i][j]=0;
            }
            else{              
                arr[i][j]=elements;
                }
           
        }
        elements=0;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<(col-i);j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}