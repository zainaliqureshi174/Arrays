/*This program print the total number
of occurrences of a number entered by user (how many time the number appeared)
in the array.*/

#include <iostream>
using namespace std;

int main()
{

int count=00, num, Array[100];

	cout <<"Enter a number to check its existence ";
	cin >>num;
	for (int i=0; i<100; i++)
	{
		Array[i]=rand()%100;
	}
	for (int j =0; j<100; j++)
	{
		if (Array[j]==num)
		{
			count++;
		}
	}

	cout <<"The number "<<num<<" appeared "<<count<<" times in the array.\n";

	return 0;
}
