//This program sort all the array elements into ascending order
#include <iostream>
using namespace std;

int main()
{
	int Size = 0;
	cout << "Enter the Size of the Array: ";
	cin >> Size;
	
	int Arr[Size];
	
	cout << "Enter the Numbers in the Array: ";
	for (int i = 0; i < Size; i++)
	{
		cin >> Arr[i];
	}
	
	int temp = 0;
	
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			if (Arr[j] > Arr[j+1])
			{
				temp = Arr[j];
				Arr[j] = Arr[j+1];
				Arr[j+1] = temp;
			}
		}
	}
	cout << "Your Sorted Array is here: ";
	
	for (int i = 0 ; i < Size; i++)
	{
		cout << Arr[i] << " ";
	}
	
	cout << endl;
        return 0;
}
