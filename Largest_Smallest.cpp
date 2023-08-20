/*This program shows the largest number, smallest number and average of the array elements And also the location of Largest and smallest numbers in the array*/

#include <iostream>
using namespace std; 

int main ()
{

int Max=0, Min=0, Index =0;
int size;

	cout <<"Enter the size of array: ";
	cin >>size;
	
	int numbers[size];
	cout << "Enter "<<size<<" numbers below: \n";
	
	for (int i=0 ; i<size; i++)
	{
		cin >>numbers[i];
	}
	
	for (int i =0; i<size; i++)
	{				//First loop gives the subscript value to be compared
		
		for (int j = 0; j<size; j++)
		{		//Second loop take the subscript value from loop 1 and compare it with all remaining elements of the array
		
			if (i!=j)
			{			//this will make sure that second loop is not comparing the same numbers of array
				
				if (numbers[i]>numbers[j])
				{
					if (j==size-1)
					{			
						Max=numbers[i];
						Index = i;
					}
					else if (i==size-1&&j==size-2)
					{
						Max=numbers[i];
						Index = i;
					}
				}
				else 
				{
					break;
				}
				
			}
		}
		
	}
	cout <<"Largest number entered is "<<Max<<" on the position "<<Index<<endl;
	
	for (int i =0; i<size; i++)
	{	
		for (int j = 0; j<size; j++)
		{
			if (i!=j)
			{	
				if (numbers[i]<numbers[j])
				{
					if (j==size-1)
					{
						Min=numbers[i];
						Index = i;
					}
					else if (i==size-1&&j==size-2)
					{
						Min=numbers[i];
						Index = i;
					}
				}
				else
				{
					break;
				}
				
			}
		}
		
	}
	cout <<"Smallest number entered is "<<Min<<" on the position "<<Index<<endl;
	
int sum =0;
float avg;

	for (int i = 0; i<size; i++)
	{
		sum = sum + numbers[i];
	}	
	
	avg = sum / size;
	
	cout <<"Average of all the numbers entered is "<<avg<<endl;
	return 0;
}
