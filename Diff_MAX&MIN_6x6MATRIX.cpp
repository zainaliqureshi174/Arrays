//This program finds the MAximum and minimum difference between the elements of a 6x6 Matrix

#include <iostream>
using namespace std;

void func(int arr[][6], int row, int col);

int main()
{	
	int Array[6][6];

	cout << "Enter the elements of your 6 x 6 Matrix.\n";

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cin >> Array[i][j];
		}
	}

	func(Array, 6, 6);

	
		return 0;
}

void func(int arr[][6], int row, int col)
{
	cout << "Your 6 x 6 Matrix is: \n";

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


}
