//This program stores random values from 1 to 50 in an array then after storing it prints all values stored in that array and then print reverse of them.

#include <iostream>
using namespace std;

int main()
{

	int randnum[10];

	cout <<"10 Array elements have stored the following numbers: \n";
	for (int i=0; i<10; i++)
	{
		randnum[i] = rand()%50;
		cout <<"\nNumber "<<i+1<<"\t"<< randnum[i];
	
		if  (i == 9)\
		{
			cout <<endl;
		}
	}
	cout << "\nReverse of the above Array numbers is: \n";
	for (int i = 9; i>=0; i--)
	{
		cout << "\nNumber "<<10-i<<"\t"<<randnum[i];
		if  (i == 0)
		{
			cout <<endl;
		}
	}
s
	return 0;
}
