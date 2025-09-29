// Dynmic_2D_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int** Array1_to_Array2(int arr[],int rows,int coloums){
	int** Array2 = new int* [3];
	int index = 0;
	for (int i = 0; i < coloums; i++)
	{
		Array2[i] = new int[coloums];

	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			Array2[i][j] = arr[index];
			index++;
		}
	}
	return Array2;
}

int* Array2_to_Array1(int**arr ,int rows, int coloums){
	int* Array1 = new int[rows * coloums];
	int index = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			Array1[index++] = arr[i][j];

		}

	}

	return Array1;

}
void print_1D_Array(int array[], int rows, int coloums){

	cout << "The elemnts of the Array after converting the 2D to 1D  are : \n{ ";
	for (int i = 0; i < rows * coloums; i++)
	{
		cout << array[i] << " ";
	}
	cout << "}";
	cout << endl;
}
void print_2D_Array(int** array,int rows,int coloums){
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}


int main()
{
	int rows, coloums;

	cout << "Enter the number of rows : ";
	cin >> rows;
	cout << "Enter the number of coloums : ";
	cin >> coloums;
	int** Array = new int* [rows];
	
	for (int i = 0; i < coloums; i++)
	{
		Array[i] = new int[coloums];
		
	}
	cout << "Enter the " << rows * coloums << " elements of the Array : ";
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			cin >> Array[i][j];
		}

	}
	//The name of a 2D array is not a pointer to pointer. It is just a pointer.
	/*int* P = &Array[0][0];
	for (int i = 0; i < rows* coloums; i++)
	{

			cout<< *(P+i)<<" ";


	}*/
	cout<<"The elements of the 2D Array are : \n";
	print_2D_Array(Array, rows, coloums);
	int* Array1_ptr = Array2_to_Array1(Array, rows, coloums);

	print_1D_Array(Array1_ptr, rows, coloums);
	
	int** Array2_ptr = Array1_to_Array2(Array1_ptr, rows, coloums);
   cout<<"The elements of the array after converting the 1D to 2D  are : \n";
	print_2D_Array(Array2_ptr, rows, coloums);

}