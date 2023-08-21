//This program Multiply two matrices

#include <iostream>
using namespace std;

int main()
{

int m1 = 0, n1 = 0, m2 = 0, n2 = 0; 

cout << "This program multiply 2 matrices. Enter the order and entries of both matrices. NOTE!! col of 1st and rows of 2nd matrix must be same\n";

while (true){

	cout <<"Enter Order of 1st matrix (m x n):\n";
	cin >> m1 >> n1;
	cout <<"Enter Order of 2nd matrix (m x n):\n";
	cin >> m2 >> n2;

	if (n1 == m2)
		break;
	else 
	cout << "NOTE!! col of 1st and rows of 2nd matrix must be same\n";
}

int matrix1[m1][n1], matrix2[m2][n2];

	cout <<"Enter the entries of matrix 1:\n";
	
	for (int i = 0; i < m1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			cin >> matrix1[i][j];
		}
	}

	cout <<"Enter the entries of matrix 2:\n";
	for (int i = 0; i < m2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cin >> matrix2[i][j];
		}
	}


	cout <<"Your matrix 1 is:\n";
	for (int i = 0; i < m1; i++)
	{
		for (int j = 0; j < n1; j++)
		{
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}


	cout <<"Your matrix 2 is:\n";
	for (int i = 0; i < m2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
return 0;
}
