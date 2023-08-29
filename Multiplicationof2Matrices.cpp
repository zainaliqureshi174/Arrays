//This program Multiply two matrices

#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	int Array1[4][4];
	int Array2[4][4];
	int Resultant[4][4];
	cout << "Enter the numbers in a 3x4 Matrix 1: \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> Array1[i][j];
		}
	}

	cout << "Enter the numbers in a 4x3 Matrix 2: \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> Array2[i][j];
		}
	}

	cout << "Now I will Multiply Martrix 1 with Matrix 2\n";
	cout << "\nPROCESSING....\n\n";

	int add = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Resultant[i][j] = 0;
			for (int k = 0; k < 4; k++)
			{
				Resultant[i][j] += Array1[i][k] * Array2[k][j];
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << Resultant[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum += Resultant[i][j];
		}
	}

	cout << "Sum of Matrix: " << sum << endl;

return 0;
}
