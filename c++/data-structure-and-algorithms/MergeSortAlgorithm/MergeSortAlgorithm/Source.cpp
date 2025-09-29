#include<iostream>

using namespace std;
void Merge(int arr[],int l,int m,int r){

int i,j,k;
int n1=m-l+1;
int n2=r-m;
int * L=new int[n1],* R=new int[n2];

for (i=0;i<n1;i++)
	L[i]=arr[l+i];
for (j=0;j<n2;j++)
	R[j]=arr[m+1+j];

i=j=0;
k=l;
while (i<n1&&j<n2){

	if(L[i]>=R[j]){
		arr[k]=L[i];
		i++;
	}
	else{

		arr[k]=R[j];
		j++;
	}
	k++;

}
while (i<n1){
	arr[k]=L[i];
	i++;
	k++;

}
while (j<n2){

arr[k]=R[j];
j++;
k++;


}






}
void merge(){


	cout<<"This is the merge function that will print what you now see on the screen \n";




}


void MergeSort(int arr[],int l,int r){

	if (l<r){
		int m=l+(r-l)/2;
		MergeSort(arr,l,m);
		MergeSort(arr,m+1,r);

		Merge(arr,0,m,r);
	}




}

void print(int arr[],int n){
	cout<<"[ ";
		for (int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"]";
		cout<<endl;
}
int main(){

	int Arr[]={60,29,59,23,8,28,92};
	int n=sizeof(Arr)/sizeof(Arr[0]);
	MergeSort(Arr,0,n-1);
	print(Arr,n);
	merge();
	
return 0;

}






