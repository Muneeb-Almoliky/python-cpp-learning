// Array1_to_Array2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define rows 3
#define coloums 3
int** Array1_to_Array2(int arr[]) {
	int** Array2=new int*[3];
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
int* Array2_to_Array1(int arr[][coloums]) {
	int *Array1=new int[rows*coloums];
	int index = 0;
	for (int i = 0; i < rows ; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			Array1[index++] = arr[i][j];

		}

	}

	return Array1;

}
void print(int array[]) {

	cout << "{ ";
	for (int i = 0; i < rows*coloums; i++)
	{
			cout << array[i] << " ";
	}
	cout << "}";
	cout << endl;
}
void print(int** array) {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloums; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}
void print(int array[][coloums]) {
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
	int Array[rows][coloums];
	cout<<"Enter the 9 elements of the Array : ";
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
	print(Array);
	int* Array1_ptr = Array2_to_Array1(Array);

	print(Array1_ptr);

	int** Array2_ptr = Array1_to_Array2(Array1_ptr);

	print(Array2_ptr);
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
