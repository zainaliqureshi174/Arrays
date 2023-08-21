//This program subtract two matrices

#include <iostream>
using namespace std;

int main()
{
int m = 0, n = 0; 

cout <<"Enter Order of 2 matrices (m x n):\n";
cin >> m >> n;
int matrix1[m][n], matrix2[m][n];

cout <<"Enter the entries of matrix 1:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cin >> matrix1[i][j];
	}
}

cout <<"Enter the entries of matrix 2:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cin >> matrix2[i][j];
	}
}


cout <<"Your matrix 1 is:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cout << matrix1[i][j] << " ";
	}
	cout << endl;
}


cout <<"Your matrix 2 is:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cout << matrix2[i][j] << " ";
	}
	cout << endl;
}


cout <<"Subtraction of matrix 1 and matrix 2 is:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cout << matrix1[i][j] - matrix2[i][j] << " ";
	}
	cout << endl;
}
return 0;
}
