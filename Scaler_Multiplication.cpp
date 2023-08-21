//This program performs scaler multiplication to a matrix

#include <iostream>
using namespace std;

int main()
{
int m = 0, n = 0, x = 0; 

cout <<"Enter Order of your matrix (m x n):\n";
cin >> m >> n;
int matrix1[m][n], matrix2[m][n];

cout <<"Enter the entries of matrix:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cin >> matrix1[i][j];
	}
}

cout <<"Enter the number to multiply with this matrix :\n";
cin >> x;

cout <<"Your matrix is:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cout << matrix1[i][j] << " ";
	}
	cout << endl;
}


cout <<"Your scaler is:\n";
cout << x << endl;
	
cout <<"Scaler multiplication of matrix with "<< x <<" is:\n";
for (int i = 0; i < m; i++)
{
	for (int j = 0; j < n; j++)
	{
		cout << x*matrix1[i][j]<< " ";
	}
	cout << endl;
}
return 0;
}
