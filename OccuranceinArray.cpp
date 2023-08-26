#include <iostream>
using namespace std;

int occurs(int arr[], int size, int num);

int main()
{
	int Size = 0;
	cout << "This Program Tells the Occurance of a number in an Array:\n\n";
	cout << "Enter the Size of the Array: ";
	cin >> Size;
	
	int my[Size];
	
	cout << "Enter the Numbers in the Array: ";
	for (int i = 0; i < Size; i++)
	{
		cin >> my[i];
	}
	
	int x = 0;
	cout << "Enter the number to Find: ";
	cin >> x;
	
	int y = 0;
	y = occurs(my, 10 , x);
	
	cout << "Your number occurs " << y << " times.\n";

	return 0;
}

int occurs(int arr[], int size, int num)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (num == arr[i])
		{
			count++;
		}
	}
	
	return count;
}
